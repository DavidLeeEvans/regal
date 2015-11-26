/* NOTE: Do not edit this file, it is generated by a script:
   Export.py --api gl 4.4 --api wgl 4.4 --api glx 4.4 --api cgl 1.4 --api egl 1.0 --outdir .
*/

/*
  Copyright (c) 2011-2013 NVIDIA Corporation
  Copyright (c) 2011-2013 Cass Everitt
  Copyright (c) 2012-2013 Scott Nations
  Copyright (c) 2012 Mathias Schott
  Copyright (c) 2012-2013 Nigel Stewart
  Copyright (c) 2012-2013 Google Inc.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.

    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
  OF THE POSSIBILITY OF SUCH DAMAGE.
*/

/*
  Intended formatting conventions:
  $ astyle --style=allman --indent=spaces=2 --indent-switches
*/

#include "pch.h" /* For MS precompiled header support */

#include "RegalUtil.h"

REGAL_GLOBAL_BEGIN

#include "RegalConfig.h"
#include "RegalContext.h"
#include "RegalEmuInfo.h"
#include "RegalContextInfo.h"
#include "RegalDispatchGlobal.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

using namespace Logging;

RegalContext::RegalContext()
: initialized(false),
  dispatchGL(),
  info(NULL),
#if REGAL_SYS_PPAPI
  ppapiES2(NULL),
  ppapiResource(0),
  sysCtx(0),
#else
  sysCtx(NULL),
#endif
  thread(0),
#if REGAL_SYS_X11
  x11Display(NULL),
#endif
#if REGAL_SYS_GLX
  x11Drawable(0),
#endif
#if REGAL_SYS_WGL
  hdc(0),
  hglrc(0),
#endif
  logCallback(NULL),
  depthBeginEnd(0),
  depthPushMatrix(0),
  depthPushAttrib(0),
  depthNewList(0)
{
  Internal("RegalContext::RegalContext","()");

  shareGroup.push_back(this);
}

void
RegalContext::Init()
{
  Internal("RegalContext::Init","()");

  RegalAssert(!initialized);

  memset( &dispatchGL, 0, sizeof( Dispatch::GL ) );

  // have to invoke the loader to get hooked up to GL before we query the context info
  void InitDispatchLoader( Layer * l, Dispatch::GL & dt );
  InitDispatchLoader( NULL, dispatchGL );

  RegalAssert(this);
  if (!info)
  {
    info = new ContextInfo();
    RegalAssert(info);
    info->init(*this);
  }

  if (!emuInfo)
  {
    emuInfo = new EmuInfo();
    RegalAssert(emuInfo);
    emuInfo->init(*info);
  }

  void InitLayers( RegalContext * ctx );
  InitLayers( this );

  initialized = true;
}

// Note that Cleanup() may or may not have been called prior to destruction
RegalContext::~RegalContext()
{
  Internal("RegalContext::~RegalContext","()");

  // Remove this context from the share group.

  shareGroup->remove(this);
}

// Called prior to deletion, if this context is still set for this thread.
// Need to:
// 1) clean up GL state we've modified
// 2) leave the RegalContext in a state where Init() could be called again
void
RegalContext::Cleanup()
{
  Internal("RegalContext::Cleanup","()");

  initialized = false;
}

bool
RegalContext::groupInitialized() const
{
  Internal("RegalContext::groupInitialized","()");

  // The first context is always the first initialized context in the group.
  return shareGroup->front()->initialized;
}

void RegalContext::parkContext( RegalContext::ParkProcs & pp )
{
  #if REGAL_SYS_OSX
  RCGLSetCurrentContext( pp, NULL );
  #elif REGAL_SYS_WGL
  RwglMakeCurrent( pp, NULL, NULL );
  #elif REGAL_SYS_GLX
  RglXMakeCurrent( pp, x11Display, None, NULL );
  #elif REGAL_SYS_IOS
    # warning "IOS support for park/unpark needs to be implemented."
  #else
  # error "Implement me!"
  #endif
  RegalMakeCurrent(NULL);
}

void RegalContext::unparkContext( RegalContext::ParkProcs & pp )
{
  #if REGAL_SYS_OSX
  RCGLSetCurrentContext( pp, reinterpret_cast<CGLContextObj>(sysCtx) );
  #elif REGAL_SYS_WGL
  RwglMakeCurrent( pp, hdc, hglrc );
  #elif REGAL_SYS_GLX
  RglXMakeCurrent( pp, x11Display, x11Drawable, reinterpret_cast<GLXContext>(sysCtx) );
  #elif REGAL_SYS_IOS
    # warning "IOS support for park/unpark needs to be implemented."
  #else
  # error "Implement me!"
  #endif
  RegalMakeCurrent(sysCtx);
}

REGAL_NAMESPACE_END
