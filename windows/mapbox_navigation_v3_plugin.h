#ifndef FLUTTER_PLUGIN_MAPBOX_NAVIGATION_V3_PLUGIN_H_
#define FLUTTER_PLUGIN_MAPBOX_NAVIGATION_V3_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace mapbox_navigation_v3 {

class MapboxNavigationV3Plugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  MapboxNavigationV3Plugin();

  virtual ~MapboxNavigationV3Plugin();

  // Disallow copy and assign.
  MapboxNavigationV3Plugin(const MapboxNavigationV3Plugin&) = delete;
  MapboxNavigationV3Plugin& operator=(const MapboxNavigationV3Plugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace mapbox_navigation_v3

#endif  // FLUTTER_PLUGIN_MAPBOX_NAVIGATION_V3_PLUGIN_H_
