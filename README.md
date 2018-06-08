## Install platformio & tools
pipenv install --dev

## Upload firmware
1. enter pipenv shell: `pipenv shell`
2. keep button pressed while plugging usb
3. get port path: `pio device list`
4. upload: `pio run -t upload --upload-port <port>`

## Config
1. Copy `sonoff/user_config_override_sample.h` -> `sonoff/user_config_override.h`
2. Add custom config

## Tweak if not working:
platformio.ini: `upload_speed`

## Useful Commands
* Ping: `esptool.py --port <port> chip_id`
* Monitor: `pio device monitor --port <port>`
  - Ip: when in monitor type `ipaddress` + `<enter>`

## Using Arduino as USB to TTL adapter:

* Arduino.RESET <-> Arduino.Ground
* Arduino.TX <-> ESP8266.TX # try TX->RX if not working
* Arduino.RX <-> ESP8266.RX # try RX->TX if not working
* Arduino.Ground <-> ESP8266.Ground
* Arduino.3_3V <-> ESP8266.3_3V
