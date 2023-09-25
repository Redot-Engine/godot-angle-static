//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// CompositorNativeWindow11.h: Implementation of NativeWindow11 using Windows.UI.Composition APIs
// which work in both Win32 and WinRT contexts.

#ifndef LIBANGLE_RENDERER_D3D_D3D11_CONVERGED_COMPOSITORNATIVEWINDOW11_H_
#define LIBANGLE_RENDERER_D3D_D3D11_CONVERGED_COMPOSITORNATIVEWINDOW11_H_

#include "libANGLE/renderer/d3d/d3d11/NativeWindow11.h"

#if defined(MINGW_ENABLED)
#ifndef DirectXAlphaMode
enum DirectXAlphaMode {
    DirectXAlphaMode_Unspecified = 0,
    DirectXAlphaMode_Premultiplied = 1,
    DirectXAlphaMode_Straight = 2,
    DirectXAlphaMode_Ignore = 3
};
#endif

#ifndef DirectXPixelFormat
enum DirectXPixelFormat {
    DirectXPixelFormat_Unknown = 0,
    DirectXPixelFormat_R32G32B32A32Typeless = 1,
    DirectXPixelFormat_R32G32B32A32Float = 2,
    DirectXPixelFormat_R32G32B32A32UInt = 3,
    DirectXPixelFormat_R32G32B32A32Int = 4,
    DirectXPixelFormat_R32G32B32Typeless = 5,
    DirectXPixelFormat_R32G32B32Float = 6,
    DirectXPixelFormat_R32G32B32UInt = 7,
    DirectXPixelFormat_R32G32B32Int = 8,
    DirectXPixelFormat_R16G16B16A16Typeless = 9,
    DirectXPixelFormat_R16G16B16A16Float = 10,
    DirectXPixelFormat_R16G16B16A16UIntNormalized = 11,
    DirectXPixelFormat_R16G16B16A16UInt = 12,
    DirectXPixelFormat_R16G16B16A16IntNormalized = 13,
    DirectXPixelFormat_R16G16B16A16Int = 14,
    DirectXPixelFormat_R32G32Typeless = 15,
    DirectXPixelFormat_R32G32Float = 16,
    DirectXPixelFormat_R32G32UInt = 17,
    DirectXPixelFormat_R32G32Int = 18,
    DirectXPixelFormat_R32G8X24Typeless = 19,
    DirectXPixelFormat_D32FloatS8X24UInt = 20,
    DirectXPixelFormat_R32FloatX8X24Typeless = 21,
    DirectXPixelFormat_X32TypelessG8X24UInt = 22,
    DirectXPixelFormat_R10G10B10A2Typeless = 23,
    DirectXPixelFormat_R10G10B10A2UIntNormalized = 24,
    DirectXPixelFormat_R10G10B10A2UInt = 25,
    DirectXPixelFormat_R11G11B10Float = 26,
    DirectXPixelFormat_R8G8B8A8Typeless = 27,
    DirectXPixelFormat_R8G8B8A8UIntNormalized = 28,
    DirectXPixelFormat_R8G8B8A8UIntNormalizedSrgb = 29,
    DirectXPixelFormat_R8G8B8A8UInt = 30,
    DirectXPixelFormat_R8G8B8A8IntNormalized = 31,
    DirectXPixelFormat_R8G8B8A8Int = 32,
    DirectXPixelFormat_R16G16Typeless = 33,
    DirectXPixelFormat_R16G16Float = 34,
    DirectXPixelFormat_R16G16UIntNormalized = 35,
    DirectXPixelFormat_R16G16UInt = 36,
    DirectXPixelFormat_R16G16IntNormalized = 37,
    DirectXPixelFormat_R16G16Int = 38,
    DirectXPixelFormat_R32Typeless = 39,
    DirectXPixelFormat_D32Float = 40,
    DirectXPixelFormat_R32Float = 41,
    DirectXPixelFormat_R32UInt = 42,
    DirectXPixelFormat_R32Int = 43,
    DirectXPixelFormat_R24G8Typeless = 44,
    DirectXPixelFormat_D24UIntNormalizedS8UInt = 45,
    DirectXPixelFormat_R24UIntNormalizedX8Typeless = 46,
    DirectXPixelFormat_X24TypelessG8UInt = 47,
    DirectXPixelFormat_R8G8Typeless = 48,
    DirectXPixelFormat_R8G8UIntNormalized = 49,
    DirectXPixelFormat_R8G8UInt = 50,
    DirectXPixelFormat_R8G8IntNormalized = 51,
    DirectXPixelFormat_R8G8Int = 52,
    DirectXPixelFormat_R16Typeless = 53,
    DirectXPixelFormat_R16Float = 54,
    DirectXPixelFormat_D16UIntNormalized = 55,
    DirectXPixelFormat_R16UIntNormalized = 56,
    DirectXPixelFormat_R16UInt = 57,
    DirectXPixelFormat_R16IntNormalized = 58,
    DirectXPixelFormat_R16Int = 59,
    DirectXPixelFormat_R8Typeless = 60,
    DirectXPixelFormat_R8UIntNormalized = 61,
    DirectXPixelFormat_R8UInt = 62,
    DirectXPixelFormat_R8IntNormalized = 63,
    DirectXPixelFormat_R8Int = 64,
    DirectXPixelFormat_A8UIntNormalized = 65,
    DirectXPixelFormat_R1UIntNormalized = 66,
    DirectXPixelFormat_R9G9B9E5SharedExponent = 67,
    DirectXPixelFormat_R8G8B8G8UIntNormalized = 68,
    DirectXPixelFormat_G8R8G8B8UIntNormalized = 69,
    DirectXPixelFormat_BC1Typeless = 70,
    DirectXPixelFormat_BC1UIntNormalized = 71,
    DirectXPixelFormat_BC1UIntNormalizedSrgb = 72,
    DirectXPixelFormat_BC2Typeless = 73,
    DirectXPixelFormat_BC2UIntNormalized = 74,
    DirectXPixelFormat_BC2UIntNormalizedSrgb = 75,
    DirectXPixelFormat_BC3Typeless = 76,
    DirectXPixelFormat_BC3UIntNormalized = 77,
    DirectXPixelFormat_BC3UIntNormalizedSrgb = 78,
    DirectXPixelFormat_BC4Typeless = 79,
    DirectXPixelFormat_BC4UIntNormalized = 80,
    DirectXPixelFormat_BC4IntNormalized = 81,
    DirectXPixelFormat_BC5Typeless = 82,
    DirectXPixelFormat_BC5UIntNormalized = 83,
    DirectXPixelFormat_BC5IntNormalized = 84,
    DirectXPixelFormat_B5G6R5UIntNormalized = 85,
    DirectXPixelFormat_B5G5R5A1UIntNormalized = 86,
    DirectXPixelFormat_B8G8R8A8UIntNormalized = 87,
    DirectXPixelFormat_B8G8R8X8UIntNormalized = 88,
    DirectXPixelFormat_R10G10B10XRBiasA2UIntNormalized = 89,
    DirectXPixelFormat_B8G8R8A8Typeless = 90,
    DirectXPixelFormat_B8G8R8A8UIntNormalizedSrgb = 91,
    DirectXPixelFormat_B8G8R8X8Typeless = 92,
    DirectXPixelFormat_B8G8R8X8UIntNormalizedSrgb = 93,
    DirectXPixelFormat_BC6HTypeless = 94,
    DirectXPixelFormat_BC6H16UnsignedFloat = 95,
    DirectXPixelFormat_BC6H16Float = 96,
    DirectXPixelFormat_BC7Typeless = 97,
    DirectXPixelFormat_BC7UIntNormalized = 98,
    DirectXPixelFormat_BC7UIntNormalizedSrgb = 99,
    DirectXPixelFormat_Ayuv = 100,
    DirectXPixelFormat_Y410 = 101,
    DirectXPixelFormat_Y416 = 102,
    DirectXPixelFormat_NV12 = 103,
    DirectXPixelFormat_P010 = 104,
    DirectXPixelFormat_P016 = 105,
    DirectXPixelFormat_Opaque420 = 106,
    DirectXPixelFormat_Yuy2 = 107,
    DirectXPixelFormat_Y210 = 108,
    DirectXPixelFormat_Y216 = 109,
    DirectXPixelFormat_NV11 = 110,
    DirectXPixelFormat_AI44 = 111,
    DirectXPixelFormat_IA44 = 112,
    DirectXPixelFormat_P8 = 113,
    DirectXPixelFormat_A8P8 = 114,
    DirectXPixelFormat_B4G4R4A4UIntNormalized = 115,
    DirectXPixelFormat_P208 = 130,
    DirectXPixelFormat_V208 = 131,
    DirectXPixelFormat_V408 = 132,
    DirectXPixelFormat_SamplerFeedbackMinMipOpaque = 189,
    DirectXPixelFormat_SamplerFeedbackMipRegionUsedOpaque = 190
};
#endif
#endif

#include <dispatcherqueue.h>
#include <windows.foundation.metadata.h>
#include <windows.ui.composition.h>
#include <windows.ui.composition.interop.h>
#include <wrl.h>

namespace rx
{

class RoHelper
{
  public:
    RoHelper();
    ~RoHelper();
    bool WinRtAvailable() const;
    bool SupportedWindowsRelease();
    HRESULT GetStringReference(PCWSTR source, HSTRING *act, HSTRING_HEADER *header);
    HRESULT GetActivationFactory(const HSTRING act, const IID &interfaceId, void **fac);
    HRESULT WindowsCompareStringOrdinal(HSTRING one, HSTRING two, int *result);
    HRESULT CreateDispatcherQueueController(
        DispatcherQueueOptions options,
        ABI::Windows::System::IDispatcherQueueController **dispatcherQueueController);
    HRESULT WindowsDeleteString(HSTRING one);
    HRESULT RoInitialize(RO_INIT_TYPE type);
    void RoUninitialize();

  private:
    using WindowsCreateStringReference_ = HRESULT __stdcall(PCWSTR,
                                                            UINT32,
                                                            HSTRING_HEADER *,
                                                            HSTRING *);

    using GetActivationFactory_ = HRESULT __stdcall(HSTRING, REFIID, void **);

    using WindowsCompareStringOrginal_ = HRESULT __stdcall(HSTRING, HSTRING, int *);

    using WindowsDeleteString_ = HRESULT __stdcall(HSTRING);

    using CreateDispatcherQueueController_ =
        HRESULT __stdcall(DispatcherQueueOptions,
                          ABI::Windows::System::IDispatcherQueueController **);

    using RoInitialize_   = HRESULT __stdcall(RO_INIT_TYPE);
    using RoUninitialize_ = void __stdcall();

    WindowsCreateStringReference_ *mFpWindowsCreateStringReference;
    GetActivationFactory_ *mFpGetActivationFactory;
    WindowsCompareStringOrginal_ *mFpWindowsCompareStringOrdinal;
    CreateDispatcherQueueController_ *mFpCreateDispatcherQueueController;
    WindowsDeleteString_ *mFpWindowsDeleteString;
    RoInitialize_ *mFpRoInitialize;
    RoUninitialize_ *mFpRoUninitialize;

    bool mWinRtAvailable;
    bool mWinRtInitialized;

    HMODULE mComBaseModule;
    HMODULE mCoreMessagingModule;
};

class CompositorNativeWindow11 : public NativeWindow11
{
  public:
    CompositorNativeWindow11(EGLNativeWindowType window, bool hasAlpha);
    ~CompositorNativeWindow11() override;

    bool initialize() override;
    bool getClientRect(LPRECT rect) const override;
    bool isIconic() const override;

    HRESULT createSwapChain(ID3D11Device *device,
                            IDXGIFactory *factory,
                            DXGI_FORMAT format,
                            UINT width,
                            UINT height,
                            UINT samples,
                            IDXGISwapChain **swapChain) override;

    void commitChange() override;

    static bool IsValidNativeWindow(EGLNativeWindowType window);

    static bool IsSupportedWinRelease();

  private:
    static bool IsSpriteVisual(EGLNativeWindowType window);

    bool mHasAlpha;

    RoHelper mRoHelper;

    // Namespace prefix required here for some reason despite using namespace
    Microsoft::WRL::ComPtr<ABI::Windows::UI::Composition::ISpriteVisual> mHostVisual;
    Microsoft::WRL::ComPtr<ABI::Windows::UI::Composition::ICompositionBrush> mCompositionBrush;
    Microsoft::WRL::ComPtr<ABI::Windows::UI::Composition::ICompositionSurface> mSurface;
    Microsoft::WRL::ComPtr<ABI::Windows::UI::Composition::ICompositionSurfaceBrush> mSurfaceBrush;
};

}  // namespace rx

#endif  // LIBANGLE_RENDERER_D3D_D3D11_CONVERGED_COMPOSITORNATIVEWINDOW11_H_
