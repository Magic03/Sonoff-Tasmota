## Install
pipenv install

## Run
```
pipenv shell
pio device list # get port (e.g. /dev/ttyACM0)
pio run --t upload --upload-port <port>
```

## Config
Copy sonoff/user_config_override_sample.h -> sonoff/user_config_override.h
Add custom config

## Tweak if not working:
platformio.ini: upload_speed

## Using Arduino as USB to TTL adapter:

Arduino.RESET <-> Arduino.Ground
Arduino.TX <-> ESP8266.TX # try TX->RX if not working
Arduino.RX <-> ESP8266.RX # try RX->TX if not working
Arduino.Ground <-> ESP8266.Ground
Arduino.3_3V <-> ESP8266.3_3V
