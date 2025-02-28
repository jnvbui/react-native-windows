﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.190111.3

#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Automation.h"
#include "winrt/Windows.UI.Xaml.Automation.Provider.h"
#include "winrt/Windows.UI.Xaml.Controls.h"
#include "winrt/Windows.UI.Xaml.Media.h"
#include "winrt/Windows.UI.Composition.h"
#include "winrt/Windows.UI.Xaml.Automation.Peers.h"
#include "winrt/react.uwp.h"

namespace winrt::react::uwp::implementation {

template <typename D, typename... I>
struct WINRT_EBO DynamicAutomationPeer_base : implements<D, react::uwp::IDynamicAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9, Windows::UI::Xaml::Automation::Provider::IInvokeProvider, Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider, Windows::UI::Xaml::Automation::Provider::ISelectionProvider, Windows::UI::Xaml::Automation::Provider::IToggleProvider, composing, I...>,
    impl::require<D, Windows::UI::Xaml::Automation::Peers::IAutomationPeer, Windows::UI::Xaml::Automation::Peers::IAutomationPeer2, Windows::UI::Xaml::Automation::Peers::IAutomationPeer3, Windows::UI::Xaml::Automation::Peers::IAutomationPeer4, Windows::UI::Xaml::Automation::Peers::IAutomationPeer5, Windows::UI::Xaml::Automation::Peers::IAutomationPeer6, Windows::UI::Xaml::Automation::Peers::IAutomationPeer7, Windows::UI::Xaml::Automation::Peers::IAutomationPeer8, Windows::UI::Xaml::Automation::Peers::IAutomationPeer9, Windows::UI::Xaml::Automation::Peers::IAutomationPeerProtected, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeer, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    impl::base<D, Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::AutomationPeer, Windows::UI::Xaml::DependencyObject>,
    Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverridesT<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides2T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides3T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides4T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides5T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides6T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides8T<D>, Windows::UI::Xaml::Automation::Peers::IAutomationPeerOverrides9T<D>
{
    using base_type = DynamicAutomationPeer_base;
    using class_type = react::uwp::DynamicAutomationPeer;
    using implements_type = typename DynamicAutomationPeer_base::implements_type;
    using implements_type::implements_type;
    using composable_base = Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer;
#if _MSC_VER < 1914
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, default_interface<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<default_interface<class_type>>(*this)));
        return result;
    }
#else
    operator impl::producer_ref<class_type> const() const noexcept
    {
        return { to_abi<default_interface<class_type>>(this) };
    }
#endif

    hstring GetRuntimeClassName() const
    {
        return L"react.uwp.DynamicAutomationPeer";
    }
    DynamicAutomationPeer_base(Windows::UI::Xaml::FrameworkElement const& owner)
    {
        impl::call_factory<Windows::UI::Xaml::Automation::Peers::FrameworkElementAutomationPeer, Windows::UI::Xaml::Automation::Peers::IFrameworkElementAutomationPeerFactory>([&](auto&& f) { f.CreateInstanceWithOwner(owner, *this, this->m_inner); });
    }
};

}

namespace winrt::react::uwp::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO DynamicAutomationPeerT : implements<D, Windows::Foundation::IActivationFactory, react::uwp::IDynamicAutomationPeerFactory, I...>
{
    using instance_type = react::uwp::DynamicAutomationPeer;

    hstring GetRuntimeClassName() const
    {
        return L"react.uwp.DynamicAutomationPeer";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        throw hresult_not_implemented();
    }

    react::uwp::DynamicAutomationPeer CreateInstance(Windows::UI::Xaml::FrameworkElement const& owner)
    {
        return make<T>(owner);
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_DYNAMICAUTOMATIONPEER_XAML_G_H) || __has_include("DynamicAutomationPeer.xaml.g.h")

#include "DynamicAutomationPeer.xaml.g.h"

#else

namespace winrt::react::uwp::implementation
{
    template <typename D, typename... I>
    using DynamicAutomationPeerT = DynamicAutomationPeer_base<D, I...>;
}

#endif
