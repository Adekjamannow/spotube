//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <audioplayers_windows/audioplayers_windows_plugin.h>
#include <bitsdojo_window_windows/bitsdojo_window_plugin.h>
#include <connectivity_plus_windows/connectivity_plus_windows_plugin.h>
#include <flutter_acrylic/flutter_acrylic_plugin.h>
#include <metadata_god/metadata_god_plugin_c_api.h>
#include <permission_handler_windows/permission_handler_windows_plugin.h>
#include <url_launcher_windows/url_launcher_windows.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  AudioplayersWindowsPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("AudioplayersWindowsPlugin"));
  BitsdojoWindowPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("BitsdojoWindowPlugin"));
  ConnectivityPlusWindowsPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("ConnectivityPlusWindowsPlugin"));
  FlutterAcrylicPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("FlutterAcrylicPlugin"));
  MetadataGodPluginCApiRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("MetadataGodPluginCApi"));
  PermissionHandlerWindowsPluginRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("PermissionHandlerWindowsPlugin"));
  UrlLauncherWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("UrlLauncherWindows"));
}
