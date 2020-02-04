// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollPresenter.h"

namespace winrt::Microsoft::UI::Xaml::Controls::Primitives
{
    CppWinRTActivatableClassWithDPFactory(ScrollPresenter)
}

#include "ScrollPresenter.g.cpp"

GlobalDependencyProperty ScrollPresenterProperties::s_BackgroundProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_HorizontalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_HorizontalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_IgnoredInputKindsProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_VerticalScrollChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_VerticalScrollRailModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_ZoomChainModeProperty{ nullptr };
GlobalDependencyProperty ScrollPresenterProperties::s_ZoomModeProperty{ nullptr };

ScrollPresenterProperties::ScrollPresenterProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollPresenter*>(this)}
    , m_edgeScrollQueuedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_scrollAnimationStartingEventSource{static_cast<ScrollPresenter*>(this)}
    , m_scrollCompletedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollPresenter*>(this)}
    , m_zoomAnimationStartingEventSource{static_cast<ScrollPresenter*>(this)}
    , m_zoomCompletedEventSource{static_cast<ScrollPresenter*>(this)}
{
    EnsureProperties();
}

void ScrollPresenterProperties::EnsureProperties()
{
    if (!s_BackgroundProperty)
    {
        s_BackgroundProperty =
            InitializeDependencyProperty(
                L"Background",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnBackgroundPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ScrollingContentOrientation>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(ScrollPresenter::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnContentOrientationPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollPresenter::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnHorizontalAnchorRatioPropertyChanged));
    }
    if (!s_HorizontalScrollChainModeProperty)
    {
        s_HorizontalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultHorizontalScrollChainMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollChainModePropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollModePropertyChanged));
    }
    if (!s_HorizontalScrollRailModeProperty)
    {
        s_HorizontalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultHorizontalScrollRailMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollRailModePropertyChanged));
    }
    if (!s_IgnoredInputKindsProperty)
    {
        s_IgnoredInputKindsProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKinds",
                winrt::name_of<winrt::ScrollingInputKinds>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(ScrollPresenter::s_defaultIgnoredInputKinds),
                winrt::PropertyChangedCallback(&OnIgnoredInputKindsPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollPresenter::s_defaultMaxZoomFactor),
                winrt::PropertyChangedCallback(&OnMaxZoomFactorPropertyChanged));
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollPresenter::s_defaultMinZoomFactor),
                winrt::PropertyChangedCallback(&OnMinZoomFactorPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollPresenter::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnVerticalAnchorRatioPropertyChanged));
    }
    if (!s_VerticalScrollChainModeProperty)
    {
        s_VerticalScrollChainModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultVerticalScrollChainMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollChainModePropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollingScrollMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollModePropertyChanged));
    }
    if (!s_VerticalScrollRailModeProperty)
    {
        s_VerticalScrollRailModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailMode",
                winrt::name_of<winrt::ScrollingRailMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultVerticalScrollRailMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollRailModePropertyChanged));
    }
    if (!s_ZoomChainModeProperty)
    {
        s_ZoomChainModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainMode",
                winrt::name_of<winrt::ScrollingChainMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultZoomChainMode),
                winrt::PropertyChangedCallback(&OnZoomChainModePropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ScrollingZoomMode>(),
                winrt::name_of<winrt::ScrollPresenter>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(ScrollPresenter::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnZoomModePropertyChanged));
    }
}

void ScrollPresenterProperties::ClearProperties()
{
    s_BackgroundProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollChainModeProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailModeProperty = nullptr;
    s_IgnoredInputKindsProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollChainModeProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailModeProperty = nullptr;
    s_ZoomChainModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollPresenterProperties::OnBackgroundPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnContentOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnHorizontalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollPresenter>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnHorizontalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnHorizontalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnIgnoredInputKindsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnMaxZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollPresenter>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnMinZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollPresenter>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnVerticalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollPresenter>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnVerticalScrollChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnVerticalScrollRailModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnZoomChainModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::OnZoomModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollPresenter>();
    winrt::get_self<ScrollPresenter>(owner)->OnPropertyChanged(args);
}

void ScrollPresenterProperties::Background(winrt::Brush const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_BackgroundProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush ScrollPresenterProperties::Background()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_BackgroundProperty));
}

void ScrollPresenterProperties::Content(winrt::UIElement const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
}

winrt::UIElement ScrollPresenterProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_ContentProperty));
}

void ScrollPresenterProperties::ContentOrientation(winrt::ScrollingContentOrientation const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ScrollingContentOrientation>::BoxValueIfNecessary(value));
}

winrt::ScrollingContentOrientation ScrollPresenterProperties::ContentOrientation()
{
    return ValueHelper<winrt::ScrollingContentOrientation>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollPresenterProperties::HorizontalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollPresenter*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollPresenter*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollPresenterProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollPresenterProperties::HorizontalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_HorizontalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollPresenterProperties::HorizontalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_HorizontalScrollChainModeProperty));
}

void ScrollPresenterProperties::HorizontalScrollMode(winrt::ScrollingScrollMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingScrollMode ScrollPresenterProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollPresenterProperties::HorizontalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_HorizontalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingRailMode ScrollPresenterProperties::HorizontalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_HorizontalScrollRailModeProperty));
}

void ScrollPresenterProperties::IgnoredInputKinds(winrt::ScrollingInputKinds const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_IgnoredInputKindsProperty, ValueHelper<winrt::ScrollingInputKinds>::BoxValueIfNecessary(value));
}

winrt::ScrollingInputKinds ScrollPresenterProperties::IgnoredInputKinds()
{
    return ValueHelper<winrt::ScrollingInputKinds>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_IgnoredInputKindsProperty));
}

void ScrollPresenterProperties::MaxZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollPresenter*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollPresenter*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollPresenterProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollPresenterProperties::MinZoomFactor(double value)
{
    double coercedValue = value;
    static_cast<ScrollPresenter*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollPresenter*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollPresenterProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_MinZoomFactorProperty));
}

void ScrollPresenterProperties::VerticalAnchorRatio(double value)
{
    double coercedValue = value;
    static_cast<ScrollPresenter*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollPresenter*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
}

double ScrollPresenterProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollPresenterProperties::VerticalScrollChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_VerticalScrollChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollPresenterProperties::VerticalScrollChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_VerticalScrollChainModeProperty));
}

void ScrollPresenterProperties::VerticalScrollMode(winrt::ScrollingScrollMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollingScrollMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingScrollMode ScrollPresenterProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollingScrollMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollPresenterProperties::VerticalScrollRailMode(winrt::ScrollingRailMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_VerticalScrollRailModeProperty, ValueHelper<winrt::ScrollingRailMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingRailMode ScrollPresenterProperties::VerticalScrollRailMode()
{
    return ValueHelper<winrt::ScrollingRailMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_VerticalScrollRailModeProperty));
}

void ScrollPresenterProperties::ZoomChainMode(winrt::ScrollingChainMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_ZoomChainModeProperty, ValueHelper<winrt::ScrollingChainMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingChainMode ScrollPresenterProperties::ZoomChainMode()
{
    return ValueHelper<winrt::ScrollingChainMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_ZoomChainModeProperty));
}

void ScrollPresenterProperties::ZoomMode(winrt::ScrollingZoomMode const& value)
{
    static_cast<ScrollPresenter*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ScrollingZoomMode>::BoxValueIfNecessary(value));
}

winrt::ScrollingZoomMode ScrollPresenterProperties::ZoomMode()
{
    return ValueHelper<winrt::ScrollingZoomMode>::CastOrUnbox(static_cast<ScrollPresenter*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollPresenterProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollPresenterProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollPresenterProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::EdgeScrollQueued(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingEdgeScrollEventArgs> const& value)
{
    return m_edgeScrollQueuedEventSource.add(value);
}

void ScrollPresenterProperties::EdgeScrollQueued(winrt::event_token const& token)
{
    m_edgeScrollQueuedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollPresenterProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ScrollAnimationStarting(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingScrollAnimationStartingEventArgs> const& value)
{
    return m_scrollAnimationStartingEventSource.add(value);
}

void ScrollPresenterProperties::ScrollAnimationStarting(winrt::event_token const& token)
{
    m_scrollAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ScrollCompleted(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingScrollCompletedEventArgs> const& value)
{
    return m_scrollCompletedEventSource.add(value);
}

void ScrollPresenterProperties::ScrollCompleted(winrt::event_token const& token)
{
    m_scrollCompletedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollPresenterProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollPresenterProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ZoomAnimationStarting(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingZoomAnimationStartingEventArgs> const& value)
{
    return m_zoomAnimationStartingEventSource.add(value);
}

void ScrollPresenterProperties::ZoomAnimationStarting(winrt::event_token const& token)
{
    m_zoomAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollPresenterProperties::ZoomCompleted(winrt::TypedEventHandler<winrt::ScrollPresenter, winrt::ScrollingZoomCompletedEventArgs> const& value)
{
    return m_zoomCompletedEventSource.add(value);
}

void ScrollPresenterProperties::ZoomCompleted(winrt::event_token const& token)
{
    m_zoomCompletedEventSource.remove(token);
}
