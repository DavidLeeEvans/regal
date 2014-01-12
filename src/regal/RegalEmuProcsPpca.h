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

#ifndef REGAL_EMU_PROCS_PPCA_H
#define REGAL_EMU_PROCS_PPCA_H

#include "RegalUtil.h"

#if REGAL_EMULATION

REGAL_GLOBAL_BEGIN

#include "RegalPrivate.h"
#include "RegalContext.h"
#include "RegalDispatch.h"

REGAL_GLOBAL_END

REGAL_NAMESPACE_BEGIN

void EmuProcsInterceptPpca( Dispatch::GL & dt );

struct EmuProcsOriginatePpca {

  EmuProcsOriginatePpca() {
    memset(this, 0, sizeof( *this ) );
  }

  PFNGLDISABLEPROC glDisable;
  PFNGLENABLEPROC glEnable;
  PFNGLGETBOOLEANVPROC glGetBooleanv;
  PFNGLGETDOUBLEVPROC glGetDoublev;
  PFNGLGETFLOATVPROC glGetFloatv;
  PFNGLGETINTEGERVPROC glGetIntegerv;
  PFNGLPIXELSTOREFPROC glPixelStoref;
  PFNGLPIXELSTOREIPROC glPixelStorei;
  PFNGLCOLORPOINTERPROC glColorPointer;
  PFNGLDISABLECLIENTSTATEPROC glDisableClientState;
  PFNGLEDGEFLAGPOINTERPROC glEdgeFlagPointer;
  PFNGLENABLECLIENTSTATEPROC glEnableClientState;
  PFNGLINDEXPOINTERPROC glIndexPointer;
  PFNGLINTERLEAVEDARRAYSPROC glInterleavedArrays;
  PFNGLNORMALPOINTERPROC glNormalPointer;
  PFNGLPOPCLIENTATTRIBPROC glPopClientAttrib;
  PFNGLPUSHCLIENTATTRIBPROC glPushClientAttrib;
  PFNGLTEXCOORDPOINTERPROC glTexCoordPointer;
  PFNGLVERTEXPOINTERPROC glVertexPointer;
  PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
  PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
  PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
  PFNGLBINDBUFFERPROC glBindBuffer;
  PFNGLDELETEBUFFERSPROC glDeleteBuffers;
  PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
  PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
  PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
  PFNGLDISABLEIPROC glDisablei;
  PFNGLENABLEIPROC glEnablei;
  PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;
  PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
  PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;
  PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers;
  PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
  PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
  PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
  PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;
  PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer;
  PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding;
  PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat;
  PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat;
  PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat;
  PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor;
  PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
  PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
  PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;
  PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;
  PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;
  PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
  PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT;
  PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT;
  PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT;
  PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
  PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
  PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT;
  PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT;
  PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT;
  PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT;
  PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT;
  PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT;
  PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT;
  PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT;
  PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT;
  PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT;
  PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT;
  PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
  PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;

  void Initialize( Dispatch::GL & dt ) {
    glDisable = dt.glDisable;
    glEnable = dt.glEnable;
    glGetBooleanv = dt.glGetBooleanv;
    glGetDoublev = dt.glGetDoublev;
    glGetFloatv = dt.glGetFloatv;
    glGetIntegerv = dt.glGetIntegerv;
    glPixelStoref = dt.glPixelStoref;
    glPixelStorei = dt.glPixelStorei;
    glColorPointer = dt.glColorPointer;
    glDisableClientState = dt.glDisableClientState;
    glEdgeFlagPointer = dt.glEdgeFlagPointer;
    glEnableClientState = dt.glEnableClientState;
    glIndexPointer = dt.glIndexPointer;
    glInterleavedArrays = dt.glInterleavedArrays;
    glNormalPointer = dt.glNormalPointer;
    glPopClientAttrib = dt.glPopClientAttrib;
    glPushClientAttrib = dt.glPushClientAttrib;
    glTexCoordPointer = dt.glTexCoordPointer;
    glVertexPointer = dt.glVertexPointer;
    glClientActiveTexture = dt.glClientActiveTexture;
    glFogCoordPointer = dt.glFogCoordPointer;
    glSecondaryColorPointer = dt.glSecondaryColorPointer;
    glBindBuffer = dt.glBindBuffer;
    glDeleteBuffers = dt.glDeleteBuffers;
    glDisableVertexAttribArray = dt.glDisableVertexAttribArray;
    glEnableVertexAttribArray = dt.glEnableVertexAttribArray;
    glVertexAttribPointer = dt.glVertexAttribPointer;
    glDisablei = dt.glDisablei;
    glEnablei = dt.glEnablei;
    glVertexAttribIPointer = dt.glVertexAttribIPointer;
    glPrimitiveRestartIndex = dt.glPrimitiveRestartIndex;
    glVertexAttribDivisor = dt.glVertexAttribDivisor;
    glBindVertexBuffers = dt.glBindVertexBuffers;
    glClientActiveTextureARB = dt.glClientActiveTextureARB;
    glBindVertexArray = dt.glBindVertexArray;
    glDeleteVertexArrays = dt.glDeleteVertexArrays;
    glVertexAttribLPointer = dt.glVertexAttribLPointer;
    glBindVertexBuffer = dt.glBindVertexBuffer;
    glVertexAttribBinding = dt.glVertexAttribBinding;
    glVertexAttribFormat = dt.glVertexAttribFormat;
    glVertexAttribIFormat = dt.glVertexAttribIFormat;
    glVertexAttribLFormat = dt.glVertexAttribLFormat;
    glVertexBindingDivisor = dt.glVertexBindingDivisor;
    glClientAttribDefaultEXT = dt.glClientAttribDefaultEXT;
    glDisableClientStateIndexedEXT = dt.glDisableClientStateIndexedEXT;
    glDisableClientStateiEXT = dt.glDisableClientStateiEXT;
    glDisableVertexArrayAttribEXT = dt.glDisableVertexArrayAttribEXT;
    glDisableVertexArrayEXT = dt.glDisableVertexArrayEXT;
    glEnableClientStateIndexedEXT = dt.glEnableClientStateIndexedEXT;
    glEnableClientStateiEXT = dt.glEnableClientStateiEXT;
    glEnableVertexArrayAttribEXT = dt.glEnableVertexArrayAttribEXT;
    glEnableVertexArrayEXT = dt.glEnableVertexArrayEXT;
    glMultiTexCoordPointerEXT = dt.glMultiTexCoordPointerEXT;
    glPushClientAttribDefaultEXT = dt.glPushClientAttribDefaultEXT;
    glVertexArrayColorOffsetEXT = dt.glVertexArrayColorOffsetEXT;
    glVertexArrayEdgeFlagOffsetEXT = dt.glVertexArrayEdgeFlagOffsetEXT;
    glVertexArrayFogCoordOffsetEXT = dt.glVertexArrayFogCoordOffsetEXT;
    glVertexArrayIndexOffsetEXT = dt.glVertexArrayIndexOffsetEXT;
    glVertexArrayMultiTexCoordOffsetEXT = dt.glVertexArrayMultiTexCoordOffsetEXT;
    glVertexArrayNormalOffsetEXT = dt.glVertexArrayNormalOffsetEXT;
    glVertexArraySecondaryColorOffsetEXT = dt.glVertexArraySecondaryColorOffsetEXT;
    glVertexArrayTexCoordOffsetEXT = dt.glVertexArrayTexCoordOffsetEXT;
    glVertexArrayVertexAttribIOffsetEXT = dt.glVertexArrayVertexAttribIOffsetEXT;
    glVertexArrayVertexAttribOffsetEXT = dt.glVertexArrayVertexAttribOffsetEXT;
    glVertexArrayVertexOffsetEXT = dt.glVertexArrayVertexOffsetEXT;
    glDisableIndexedEXT = dt.glDisableIndexedEXT;
    glEnableIndexedEXT = dt.glEnableIndexedEXT;
  }
};

REGAL_NAMESPACE_END

#endif // REGAL_EMULATION

#endif // REGAL_EMU_PROCS_PPCA_H
