/*
  user_config_override.h - user configuration overrides my_user_config.h for Sonoff-Tasmota

  Copyright (C) 2019  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is included
#warning **** user_config_override.h: Using Settings from this File ****

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *   (3) for platformio:
 *         define USE_CONFIG_OVERRIDE as a build flags.
 *         ie1 : export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE'
 *         ie2 : enable in file platformio.ini "build_flags = -Wl,-Tesp8266.flash.1m0.ld -DUSE_CONFIG_OVERRIDE"
 *       for Arduino IDE:
 *         enable define USE_CONFIG_OVERRIDE in my_user_config.h
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/


// -- Wifi ----------------------------------------
#undef STA_SSID1
#define STA_SSID1              ""                // [Ssid1] Wifi SSID
#undef STA_PASS1
#define STA_PASS1              ""                // [Password1] Wifi password

#undef STA_SSID2
#define STA_SSID2              ""                // [Ssid2] Optional alternate AP Wifi SSID
#undef STA_PASS2
#define STA_PASS2              ""                // [Password2] Optional alternate AP Wifi password

// -- MQTT ----------------------------------------
#undef MQTT_TOPIC
#define MQTT_TOPIC             "sonoff"           // [Topic] (unique) MQTT device topic

// -- HTTP ----------------------------------------
#undef WEB_SERVER
#define WEB_SERVER             2                 // [WebServer] Web server (0 = Off, 1 = Start as User, 2 = Start as Admin)
#undef WEB_PASSWORD
#define WEB_PASSWORD           ""                // [WebPassword] Web server Admin mode Password for WEB_USERNAME (empty string = Disable)

// -- Application ---------------------------------
#undef APP_LEDSTATE
#define APP_LEDSTATE           LED_OFF         // [LedState] Function of led
                                               //   (LED_OFF, LED_POWER, LED_MQTTSUB, LED_POWER_MQTTSUB, LED_MQTTPUB, LED_POWER_MQTTPUB, LED_MQTT, LED_POWER_MQTT)

#undef SWITCH_MODE
#define SWITCH_MODE            TOGGLE            // [SwitchMode] TOGGLE, FOLLOW, FOLLOW_INV, PUSHBUTTON, PUSHBUTTON_INV, PUSHBUTTONHOLD, PUSHBUTTONHOLD_INV, PUSHBUTTON_TOGGLE (the wall switch state)


#endif  // _USER_CONFIG_OVERRIDE_H_