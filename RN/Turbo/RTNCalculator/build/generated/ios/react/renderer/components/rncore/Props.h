
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GeneratePropsH.js
 */
#pragma once

#include <cinttypes>
#include <jsi/jsi.h>
#include <react/renderer/components/view/ViewProps.h>
#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/graphics/Color.h>
#include <react/renderer/imagemanager/primitives.h>
#include <vector>

namespace facebook {
namespace react {

enum class ActivityIndicatorViewSize { Small, Large };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, ActivityIndicatorViewSize &result) {
  auto string = (std::string)value;
  if (string == "small") { result = ActivityIndicatorViewSize::Small; return; }
  if (string == "large") { result = ActivityIndicatorViewSize::Large; return; }
  abort();
}

static inline std::string toString(const ActivityIndicatorViewSize &value) {
  switch (value) {
    case ActivityIndicatorViewSize::Small: return "small";
    case ActivityIndicatorViewSize::Large: return "large";
  }
}

class JSI_EXPORT ActivityIndicatorViewProps final : public ViewProps {
 public:
  ActivityIndicatorViewProps() = default;
  ActivityIndicatorViewProps(const PropsParserContext& context, const ActivityIndicatorViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool hidesWhenStopped{false};
  bool animating{false};
  SharedColor color{};
  ActivityIndicatorViewSize size{ActivityIndicatorViewSize::Small};
};

enum class DatePickerMinuteInterval { MinuteInterval1 = 1, MinuteInterval2 = 2, MinuteInterval3 = 3, MinuteInterval4 = 4, MinuteInterval5 = 5, MinuteInterval6 = 6, MinuteInterval10 = 10, MinuteInterval12 = 12, MinuteInterval15 = 15, MinuteInterval20 = 20, MinuteInterval30 = 30 };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, DatePickerMinuteInterval &result) {
  assert(value.hasType<int>());
  auto integerValue = (int)value;
  switch (integerValue) {
    case 1:
      result = DatePickerMinuteInterval::MinuteInterval1;
      return;
    case 2:
      result = DatePickerMinuteInterval::MinuteInterval2;
      return;
    case 3:
      result = DatePickerMinuteInterval::MinuteInterval3;
      return;
    case 4:
      result = DatePickerMinuteInterval::MinuteInterval4;
      return;
    case 5:
      result = DatePickerMinuteInterval::MinuteInterval5;
      return;
    case 6:
      result = DatePickerMinuteInterval::MinuteInterval6;
      return;
    case 10:
      result = DatePickerMinuteInterval::MinuteInterval10;
      return;
    case 12:
      result = DatePickerMinuteInterval::MinuteInterval12;
      return;
    case 15:
      result = DatePickerMinuteInterval::MinuteInterval15;
      return;
    case 20:
      result = DatePickerMinuteInterval::MinuteInterval20;
      return;
    case 30:
      result = DatePickerMinuteInterval::MinuteInterval30;
      return;
  }
  abort();
}

static inline std::string toString(const DatePickerMinuteInterval &value) {
  switch (value) {
    case DatePickerMinuteInterval::MinuteInterval1: return "1";
    case DatePickerMinuteInterval::MinuteInterval2: return "2";
    case DatePickerMinuteInterval::MinuteInterval3: return "3";
    case DatePickerMinuteInterval::MinuteInterval4: return "4";
    case DatePickerMinuteInterval::MinuteInterval5: return "5";
    case DatePickerMinuteInterval::MinuteInterval6: return "6";
    case DatePickerMinuteInterval::MinuteInterval10: return "10";
    case DatePickerMinuteInterval::MinuteInterval12: return "12";
    case DatePickerMinuteInterval::MinuteInterval15: return "15";
    case DatePickerMinuteInterval::MinuteInterval20: return "20";
    case DatePickerMinuteInterval::MinuteInterval30: return "30";
  }
}
enum class DatePickerMode { Date, Time, Datetime };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, DatePickerMode &result) {
  auto string = (std::string)value;
  if (string == "date") { result = DatePickerMode::Date; return; }
  if (string == "time") { result = DatePickerMode::Time; return; }
  if (string == "datetime") { result = DatePickerMode::Datetime; return; }
  abort();
}

static inline std::string toString(const DatePickerMode &value) {
  switch (value) {
    case DatePickerMode::Date: return "date";
    case DatePickerMode::Time: return "time";
    case DatePickerMode::Datetime: return "datetime";
  }
}
enum class DatePickerPickerStyle { Compact, Spinner, Inline };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, DatePickerPickerStyle &result) {
  auto string = (std::string)value;
  if (string == "compact") { result = DatePickerPickerStyle::Compact; return; }
  if (string == "spinner") { result = DatePickerPickerStyle::Spinner; return; }
  if (string == "inline") { result = DatePickerPickerStyle::Inline; return; }
  abort();
}

static inline std::string toString(const DatePickerPickerStyle &value) {
  switch (value) {
    case DatePickerPickerStyle::Compact: return "compact";
    case DatePickerPickerStyle::Spinner: return "spinner";
    case DatePickerPickerStyle::Inline: return "inline";
  }
}

class JSI_EXPORT DatePickerProps final : public ViewProps {
 public:
  DatePickerProps() = default;
  DatePickerProps(const PropsParserContext& context, const DatePickerProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  Float date{0.0};
  Float initialDate{0.0};
  std::string locale{};
  Float maximumDate{0.0};
  Float minimumDate{0.0};
  DatePickerMinuteInterval minuteInterval{DatePickerMinuteInterval::MinuteInterval1};
  DatePickerMode mode{DatePickerMode::Date};
  Float timeZoneOffsetInMinutes{0.0};
  DatePickerPickerStyle pickerStyle{DatePickerPickerStyle::Spinner};
};

enum class AndroidDrawerLayoutKeyboardDismissMode { None, OnDrag };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, AndroidDrawerLayoutKeyboardDismissMode &result) {
  auto string = (std::string)value;
  if (string == "none") { result = AndroidDrawerLayoutKeyboardDismissMode::None; return; }
  if (string == "on-drag") { result = AndroidDrawerLayoutKeyboardDismissMode::OnDrag; return; }
  abort();
}

static inline std::string toString(const AndroidDrawerLayoutKeyboardDismissMode &value) {
  switch (value) {
    case AndroidDrawerLayoutKeyboardDismissMode::None: return "none";
    case AndroidDrawerLayoutKeyboardDismissMode::OnDrag: return "on-drag";
  }
}
enum class AndroidDrawerLayoutDrawerPosition { Left, Right };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, AndroidDrawerLayoutDrawerPosition &result) {
  auto string = (std::string)value;
  if (string == "left") { result = AndroidDrawerLayoutDrawerPosition::Left; return; }
  if (string == "right") { result = AndroidDrawerLayoutDrawerPosition::Right; return; }
  abort();
}

static inline std::string toString(const AndroidDrawerLayoutDrawerPosition &value) {
  switch (value) {
    case AndroidDrawerLayoutDrawerPosition::Left: return "left";
    case AndroidDrawerLayoutDrawerPosition::Right: return "right";
  }
}
enum class AndroidDrawerLayoutDrawerLockMode { Unlocked, LockedClosed, LockedOpen };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, AndroidDrawerLayoutDrawerLockMode &result) {
  auto string = (std::string)value;
  if (string == "unlocked") { result = AndroidDrawerLayoutDrawerLockMode::Unlocked; return; }
  if (string == "locked-closed") { result = AndroidDrawerLayoutDrawerLockMode::LockedClosed; return; }
  if (string == "locked-open") { result = AndroidDrawerLayoutDrawerLockMode::LockedOpen; return; }
  abort();
}

static inline std::string toString(const AndroidDrawerLayoutDrawerLockMode &value) {
  switch (value) {
    case AndroidDrawerLayoutDrawerLockMode::Unlocked: return "unlocked";
    case AndroidDrawerLayoutDrawerLockMode::LockedClosed: return "locked-closed";
    case AndroidDrawerLayoutDrawerLockMode::LockedOpen: return "locked-open";
  }
}

class JSI_EXPORT AndroidDrawerLayoutProps final : public ViewProps {
 public:
  AndroidDrawerLayoutProps() = default;
  AndroidDrawerLayoutProps(const PropsParserContext& context, const AndroidDrawerLayoutProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  AndroidDrawerLayoutKeyboardDismissMode keyboardDismissMode{AndroidDrawerLayoutKeyboardDismissMode::None};
  SharedColor drawerBackgroundColor{};
  AndroidDrawerLayoutDrawerPosition drawerPosition{AndroidDrawerLayoutDrawerPosition::Left};
  Float drawerWidth{};
  AndroidDrawerLayoutDrawerLockMode drawerLockMode{AndroidDrawerLayoutDrawerLockMode::Unlocked};
  SharedColor statusBarBackgroundColor{};
};

class JSI_EXPORT AndroidProgressBarProps final : public ViewProps {
 public:
  AndroidProgressBarProps() = default;
  AndroidProgressBarProps(const PropsParserContext& context, const AndroidProgressBarProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  std::string styleAttr{};
  std::string typeAttr{};
  bool indeterminate{false};
  double progress{0.0};
  bool animating{true};
  SharedColor color{};
  std::string testID{""};
};

enum class RCTProgressViewProgressViewStyle { Default, Bar };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, RCTProgressViewProgressViewStyle &result) {
  auto string = (std::string)value;
  if (string == "default") { result = RCTProgressViewProgressViewStyle::Default; return; }
  if (string == "bar") { result = RCTProgressViewProgressViewStyle::Bar; return; }
  abort();
}

static inline std::string toString(const RCTProgressViewProgressViewStyle &value) {
  switch (value) {
    case RCTProgressViewProgressViewStyle::Default: return "default";
    case RCTProgressViewProgressViewStyle::Bar: return "bar";
  }
}

class JSI_EXPORT RCTProgressViewProps final : public ViewProps {
 public:
  RCTProgressViewProps() = default;
  RCTProgressViewProps(const PropsParserContext& context, const RCTProgressViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  RCTProgressViewProgressViewStyle progressViewStyle{RCTProgressViewProgressViewStyle::Default};
  Float progress{0.0};
  SharedColor progressTintColor{};
  SharedColor trackTintColor{};
  ImageSource progressImage{};
  ImageSource trackImage{};
};

enum class AndroidSwipeRefreshLayoutSize { Default, Large };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, AndroidSwipeRefreshLayoutSize &result) {
  auto string = (std::string)value;
  if (string == "default") { result = AndroidSwipeRefreshLayoutSize::Default; return; }
  if (string == "large") { result = AndroidSwipeRefreshLayoutSize::Large; return; }
  abort();
}

static inline std::string toString(const AndroidSwipeRefreshLayoutSize &value) {
  switch (value) {
    case AndroidSwipeRefreshLayoutSize::Default: return "default";
    case AndroidSwipeRefreshLayoutSize::Large: return "large";
  }
}

class JSI_EXPORT AndroidSwipeRefreshLayoutProps final : public ViewProps {
 public:
  AndroidSwipeRefreshLayoutProps() = default;
  AndroidSwipeRefreshLayoutProps(const PropsParserContext& context, const AndroidSwipeRefreshLayoutProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool enabled{true};
  std::vector<SharedColor> colors{};
  SharedColor progressBackgroundColor{};
  AndroidSwipeRefreshLayoutSize size{AndroidSwipeRefreshLayoutSize::Default};
  Float progressViewOffset{0.0};
  bool refreshing{false};
};

class JSI_EXPORT PullToRefreshViewProps final : public ViewProps {
 public:
  PullToRefreshViewProps() = default;
  PullToRefreshViewProps(const PropsParserContext& context, const PullToRefreshViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  SharedColor tintColor{};
  SharedColor titleColor{};
  std::string title{};
  Float progressViewOffset{0.0};
  bool refreshing{false};
};

class JSI_EXPORT SafeAreaViewProps final : public ViewProps {
 public:
  SafeAreaViewProps() = default;
  SafeAreaViewProps(const PropsParserContext& context, const SafeAreaViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  
};

class JSI_EXPORT AndroidHorizontalScrollContentViewProps final : public ViewProps {
 public:
  AndroidHorizontalScrollContentViewProps() = default;
  AndroidHorizontalScrollContentViewProps(const PropsParserContext& context, const AndroidHorizontalScrollContentViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool removeClippedSubviews{false};
};

class JSI_EXPORT SliderProps final : public ViewProps {
 public:
  SliderProps() = default;
  SliderProps(const PropsParserContext& context, const SliderProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool disabled{false};
  bool enabled{true};
  ImageSource maximumTrackImage{};
  SharedColor maximumTrackTintColor{};
  double maximumValue{1.0};
  ImageSource minimumTrackImage{};
  SharedColor minimumTrackTintColor{};
  double minimumValue{0.0};
  double step{0.0};
  std::string testID{""};
  ImageSource thumbImage{};
  SharedColor thumbTintColor{};
  ImageSource trackImage{};
  double value{0.0};
};

class JSI_EXPORT AndroidSwitchProps final : public ViewProps {
 public:
  AndroidSwitchProps() = default;
  AndroidSwitchProps(const PropsParserContext& context, const AndroidSwitchProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool disabled{false};
  bool enabled{true};
  SharedColor thumbColor{};
  SharedColor trackColorForFalse{};
  SharedColor trackColorForTrue{};
  bool value{false};
  bool on{false};
  SharedColor thumbTintColor{};
  SharedColor trackTintColor{};
};

class JSI_EXPORT SwitchProps final : public ViewProps {
 public:
  SwitchProps() = default;
  SwitchProps(const PropsParserContext& context, const SwitchProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  bool disabled{false};
  bool value{false};
  SharedColor tintColor{};
  SharedColor onTintColor{};
  SharedColor thumbTintColor{};
  SharedColor thumbColor{};
  SharedColor trackColorForFalse{};
  SharedColor trackColorForTrue{};
};

class JSI_EXPORT InputAccessoryProps final : public ViewProps {
 public:
  InputAccessoryProps() = default;
  InputAccessoryProps(const PropsParserContext& context, const InputAccessoryProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  SharedColor backgroundColor{};
};

class JSI_EXPORT UnimplementedNativeViewProps final : public ViewProps {
 public:
  UnimplementedNativeViewProps() = default;
  UnimplementedNativeViewProps(const PropsParserContext& context, const UnimplementedNativeViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  std::string name{""};
};

enum class ModalHostViewAnimationType { None, Slide, Fade };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, ModalHostViewAnimationType &result) {
  auto string = (std::string)value;
  if (string == "none") { result = ModalHostViewAnimationType::None; return; }
  if (string == "slide") { result = ModalHostViewAnimationType::Slide; return; }
  if (string == "fade") { result = ModalHostViewAnimationType::Fade; return; }
  abort();
}

static inline std::string toString(const ModalHostViewAnimationType &value) {
  switch (value) {
    case ModalHostViewAnimationType::None: return "none";
    case ModalHostViewAnimationType::Slide: return "slide";
    case ModalHostViewAnimationType::Fade: return "fade";
  }
}
enum class ModalHostViewPresentationStyle { FullScreen, PageSheet, FormSheet, OverFullScreen };

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, ModalHostViewPresentationStyle &result) {
  auto string = (std::string)value;
  if (string == "fullScreen") { result = ModalHostViewPresentationStyle::FullScreen; return; }
  if (string == "pageSheet") { result = ModalHostViewPresentationStyle::PageSheet; return; }
  if (string == "formSheet") { result = ModalHostViewPresentationStyle::FormSheet; return; }
  if (string == "overFullScreen") { result = ModalHostViewPresentationStyle::OverFullScreen; return; }
  abort();
}

static inline std::string toString(const ModalHostViewPresentationStyle &value) {
  switch (value) {
    case ModalHostViewPresentationStyle::FullScreen: return "fullScreen";
    case ModalHostViewPresentationStyle::PageSheet: return "pageSheet";
    case ModalHostViewPresentationStyle::FormSheet: return "formSheet";
    case ModalHostViewPresentationStyle::OverFullScreen: return "overFullScreen";
  }
}
using ModalHostViewSupportedOrientationsMask = uint32_t;

enum class ModalHostViewSupportedOrientations: ModalHostViewSupportedOrientationsMask {
  Portrait = 1 << 0,
  PortraitUpsideDown = 1 << 1,
  Landscape = 1 << 2,
  LandscapeLeft = 1 << 3,
  LandscapeRight = 1 << 4
};

constexpr bool operator&(
  ModalHostViewSupportedOrientationsMask const lhs,
  enum ModalHostViewSupportedOrientations const rhs) {
  return lhs & static_cast<ModalHostViewSupportedOrientationsMask>(rhs);
}

constexpr ModalHostViewSupportedOrientationsMask operator|(
  ModalHostViewSupportedOrientationsMask const lhs,
  enum ModalHostViewSupportedOrientations const rhs) {
  return lhs | static_cast<ModalHostViewSupportedOrientationsMask>(rhs);
}

constexpr void operator|=(
  ModalHostViewSupportedOrientationsMask &lhs,
  enum ModalHostViewSupportedOrientations const rhs) {
  lhs = lhs | static_cast<ModalHostViewSupportedOrientationsMask>(rhs);
}

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, ModalHostViewSupportedOrientationsMask &result) {
  auto items = std::vector<std::string>{value};
  for (const auto &item : items) {
    if (item == "portrait") {
      result |= ModalHostViewSupportedOrientations::Portrait;
      continue;
    }
    if (item == "portrait-upside-down") {
      result |= ModalHostViewSupportedOrientations::PortraitUpsideDown;
      continue;
    }
    if (item == "landscape") {
      result |= ModalHostViewSupportedOrientations::Landscape;
      continue;
    }
    if (item == "landscape-left") {
      result |= ModalHostViewSupportedOrientations::LandscapeLeft;
      continue;
    }
    if (item == "landscape-right") {
      result |= ModalHostViewSupportedOrientations::LandscapeRight;
      continue;
    }
    abort();
  }
}

static inline std::string toString(const ModalHostViewSupportedOrientationsMask &value) {
    auto result = std::string{};
    auto separator = std::string{", "};

    if (value & ModalHostViewSupportedOrientations::Portrait) {
      result += "portrait" + separator;
    }
    if (value & ModalHostViewSupportedOrientations::PortraitUpsideDown) {
      result += "portrait-upside-down" + separator;
    }
    if (value & ModalHostViewSupportedOrientations::Landscape) {
      result += "landscape" + separator;
    }
    if (value & ModalHostViewSupportedOrientations::LandscapeLeft) {
      result += "landscape-left" + separator;
    }
    if (value & ModalHostViewSupportedOrientations::LandscapeRight) {
      result += "landscape-right" + separator;
    }
    if (!result.empty()) {
      result.erase(result.length() - separator.length());
    }
    return result;
}

class JSI_EXPORT ModalHostViewProps final : public ViewProps {
 public:
  ModalHostViewProps() = default;
  ModalHostViewProps(const PropsParserContext& context, const ModalHostViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  ModalHostViewAnimationType animationType{ModalHostViewAnimationType::None};
  ModalHostViewPresentationStyle presentationStyle{ModalHostViewPresentationStyle::FullScreen};
  bool transparent{false};
  bool statusBarTranslucent{false};
  bool hardwareAccelerated{false};
  bool visible{false};
  bool animated{false};
  ModalHostViewSupportedOrientationsMask supportedOrientations{static_cast<ModalHostViewSupportedOrientationsMask>(ModalHostViewSupportedOrientations::Portrait)};
  int identifier{0};
};

} // namespace react
} // namespace facebook
