## Install platformio & tools
pipenv install --dev

## Config
1. Copy `romeira/user_config_override.h` -> `sonoff/user_config_override.h`
1. Copy `romeira/platformio.ini` -> `platformio.ini`

## Upload firmware
1. enter pipenv shell: `pipenv shell`
2. keep button pressed while plugging usb
3. get port path: `pio device list`
4. upload: `pio run -t upload --upload-port <port>`

## Tweak if not working:
platformio.ini: `upload_speed`

## Useful Commands
* Ping: `esptool.py --port <port> chip_id`
* Monitor: `pio device monitor --port <port>`
  - Ip: when in monitor type `ipaddress` + `<enter>`

## Using Arduino as USB to TTL adapter:

```
Arduino.RESET <-> Arduino.Ground
Arduino.TX <-> ESP8266.TX # try TX->RX if not working
Arduino.RX <-> ESP8266.RX # try RX->TX if not working
Arduino.Ground <-> ESP8266.Ground
Arduino.3_3V <-> ESP8266.3_3V
```

# References
[Tasmota Wiki](https://github.com/arendst/Sonoff-Tasmota/wiki)

Youtube:
  * [DrZzs](https://www.youtube.com/channel/UC7G4tLa4Kt6A9e3hJ-HO8ng)
  * [SuperHouse](https://www.youtube.com/user/SuperHouseTV)
