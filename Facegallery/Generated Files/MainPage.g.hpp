﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::Facegallery::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::Facegallery::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element1))->SizeChanged += ref new ::Windows::UI::Xaml::SizeChangedEventHandler(this, (void (::Facegallery::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::SizeChangedEventArgs^))&MainPage::Grid_SizeChanged);
            }
            break;
        case 2:
            {
                this->FlipImage = safe_cast<::Windows::UI::Xaml::Controls::FlipView^>(__target);
            }
            break;
        case 3:
            {
                this->ImportBtn = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->ImportBtn))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Facegallery::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::ImportBtn_Click);
            }
            break;
        case 4:
            {
                this->ExportBtn = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            }
            break;
        case 5:
            {
                this->tbtest = safe_cast<::Windows::UI::Xaml::Controls::TextBox^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::Facegallery::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

