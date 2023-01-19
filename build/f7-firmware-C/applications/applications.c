#include "applications.h"
#include <assets_icons.h>
const char* FLIPPER_AUTORUN_APP_NAME = "";
extern int32_t bt_srv(void* p);
extern int32_t cli_srv(void* p);
extern int32_t dialogs_srv(void* p);
extern int32_t dolphin_srv(void* p);
extern int32_t desktop_srv(void* p);
extern int32_t gui_srv(void* p);
extern int32_t input_srv(void* p);
extern int32_t loader_srv(void* p);
extern int32_t notification_srv(void* p);
extern int32_t power_srv(void* p);
extern int32_t storage_srv(void* p);
const FlipperApplication FLIPPER_SERVICES[] = {

    {.app = bt_srv,
     .name = "BtSrv",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = cli_srv,
     .name = "CliSrv",
     .stack_size = 4096,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = dialogs_srv,
     .name = "DialogsSrv",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = dolphin_srv,
     .name = "DolphinSrv",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = desktop_srv,
     .name = "DesktopSrv",
     .stack_size = 4096,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = gui_srv,
     .name = "GuiSrv",
     .stack_size = 2048,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = input_srv,
     .name = "InputSrv",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = loader_srv,
     .name = "LoaderSrv",
     .stack_size = 2048,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = notification_srv,
     .name = "NotificationSrv",
     .stack_size = 1536,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = power_srv,
     .name = "PowerSrv",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = storage_srv,
     .name = "StorageSrv",
     .stack_size = 3072,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault }
};
const size_t FLIPPER_SERVICES_COUNT = COUNT_OF(FLIPPER_SERVICES);
extern int32_t updater_srv(void* p);
extern int32_t storage_move_to_sd_app(void* p);
const FlipperApplication FLIPPER_SYSTEM_APPS[] = {

    {.app = updater_srv,
     .name = "UpdaterApp",
     .stack_size = 2048,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = storage_move_to_sd_app,
     .name = "StorageMoveToSd",
     .stack_size = 2048,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault }
};
const size_t FLIPPER_SYSTEM_APPS_COUNT = COUNT_OF(FLIPPER_SYSTEM_APPS);
extern int32_t clock_loader_app(void* p);
extern int32_t fap_loader_app(void* p);
extern int32_t subghz_app(void* p);
extern int32_t unirfremix_loader_app(void* p);
extern int32_t subghz_playlist_loader_app(void* p);
extern int32_t lfrfid_app(void* p);
extern int32_t nfc_app(void* p);
extern int32_t infrared_loader_app(void* p);
extern int32_t infrared_rem_loader_app(void* p);
extern int32_t gpio_loader_app(void* p);
extern int32_t ibutton_loader_app(void* p);
extern int32_t bad_usb_loader_app(void* p);
extern int32_t u2f_loader_app(void* p);
const FlipperApplication FLIPPER_APPS[] = {

    {.app = clock_loader_app,
     .name = "Clock",
     .stack_size = 1536,
     .icon = &A_Clock_14,
     .link = "/ext/apps/Main/Clock.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = fap_loader_app,
     .name = "Applications",
     .stack_size = 1536,
     .icon = &A_Plugins_14,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = subghz_app,
     .name = "Sub-GHz",
     .stack_size = 2048,
     .icon = &A_Sub1ghz_14,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = unirfremix_loader_app,
     .name = "Sub-GHz Remote",
     .stack_size = 1536,
     .icon = &A_UniRFRemix_14,
     .link = "/ext/apps/Main/SubGHz_Remote.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = subghz_playlist_loader_app,
     .name = "Sub-GHz Playlist",
     .stack_size = 2048,
     .icon = &A_Sub1ghz_14,
     .link = "/ext/apps/Tools/SubGHz_Playlist.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = lfrfid_app,
     .name = "125 kHz RFID",
     .stack_size = 2048,
     .icon = &A_125khz_14,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = nfc_app,
     .name = "NFC",
     .stack_size = 5120,
     .icon = &A_NFC_14,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = infrared_loader_app,
     .name = "Infrared",
     .stack_size = 2048,
     .icon = &A_Infrared_14,
     .link = "/ext/apps/Main/infrared.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = infrared_rem_loader_app,
     .name = "IR Remote",
     .stack_size = 2048,
     .icon = &A_Infrared_14,
     .link = "/ext/apps/Tools/IR_Remote.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = gpio_loader_app,
     .name = "GPIO",
     .stack_size = 1536,
     .icon = &A_GPIO_14,
     .link = "/ext/apps/Main/gpio.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = ibutton_loader_app,
     .name = "iButton",
     .stack_size = 1536,
     .icon = &A_iButton_14,
     .link = "/ext/apps/Main/ibutton.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = bad_usb_loader_app,
     .name = "Bad USB",
     .stack_size = 2048,
     .icon = &A_BadUsb_14,
     .link = "/ext/apps/Main/bad_usb.fap",
     .flags = FlipperApplicationFlagDefault },

    {.app = u2f_loader_app,
     .name = "U2F",
     .stack_size = 2048,
     .icon = &A_U2F_14,
     .link = "/ext/apps/Main/u2f.fap",
     .flags = FlipperApplicationFlagDefault }
};
const size_t FLIPPER_APPS_COUNT = COUNT_OF(FLIPPER_APPS);
const FlipperApplication FLIPPER_PLUGINS[] = {

};
const size_t FLIPPER_PLUGINS_COUNT = COUNT_OF(FLIPPER_PLUGINS);
const FlipperApplication FLIPPER_DEBUG_APPS[] = {

};
const size_t FLIPPER_DEBUG_APPS_COUNT = COUNT_OF(FLIPPER_DEBUG_APPS);
extern int32_t bt_settings_app(void* p);
extern int32_t notification_settings_app(void* p);
extern int32_t storage_settings_app(void* p);
extern int32_t power_settings_app(void* p);
extern int32_t desktop_settings_app(void* p);
extern int32_t passport_app(void* p);
extern int32_t system_settings_app(void* p);
extern int32_t about_settings_app(void* p);
const FlipperApplication FLIPPER_SETTINGS_APPS[] = {

    {.app = bt_settings_app,
     .name = "Bluetooth",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = notification_settings_app,
     .name = "LCD and Notifications",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = storage_settings_app,
     .name = "Storage",
     .stack_size = 2048,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = power_settings_app,
     .name = "Power",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagInsomniaSafe },

    {.app = desktop_settings_app,
     .name = "Desktop",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = passport_app,
     .name = "Passport",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = system_settings_app,
     .name = "System",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault },

    {.app = about_settings_app,
     .name = "About",
     .stack_size = 1024,
     .icon = NULL,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault }
};
const size_t FLIPPER_SETTINGS_APPS_COUNT = COUNT_OF(FLIPPER_SETTINGS_APPS);
extern void crypto_on_system_start();
extern void rpc_on_system_start();
extern void infrared_on_system_start();
extern void nfc_on_system_start();
extern void subghz_on_system_start();
extern void lfrfid_on_system_start();
extern void ibutton_on_system_start();
extern void bt_on_system_start();
extern void power_on_system_start();
extern void locale_on_system_start();
extern void storage_on_system_start();
extern void updater_on_system_start();
extern void storage_move_to_sd_start();
extern void namechanger_on_system_start();
const FlipperOnStartHook FLIPPER_ON_SYSTEM_START[] = {
crypto_on_system_start,
rpc_on_system_start,
infrared_on_system_start,
nfc_on_system_start,
subghz_on_system_start,
lfrfid_on_system_start,
ibutton_on_system_start,
bt_on_system_start,
power_on_system_start,
locale_on_system_start,
storage_on_system_start,
updater_on_system_start,
storage_move_to_sd_start,
namechanger_on_system_start
};
const size_t FLIPPER_ON_SYSTEM_START_COUNT = COUNT_OF(FLIPPER_ON_SYSTEM_START);
extern int32_t archive_app(void* p);
const FlipperApplication FLIPPER_ARCHIVE = 
    {.app = archive_app,
     .name = "Archive",
     .stack_size = 6144,
     .icon = &A_FileManager_14,
     .link = "NULL",
     .flags = FlipperApplicationFlagDefault };