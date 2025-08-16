#include "include/mapbox_navigation_v3/mapbox_navigation_v3_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "mapbox_navigation_v3_plugin.h"

void MapboxNavigationV3PluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  mapbox_navigation_v3::MapboxNavigationV3Plugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
