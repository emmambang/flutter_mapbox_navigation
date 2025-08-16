//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <mapbox_navigation_v3/mapbox_navigation_v3_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) mapbox_navigation_v3_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "MapboxNavigationV3Plugin");
  mapbox_navigation_v3_plugin_register_with_registrar(mapbox_navigation_v3_registrar);
}
