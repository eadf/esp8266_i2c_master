# esp8266_i2c_master

Drop in replacement for the IoT demo ```i2c_master.c``` and ```i2c_master.h```


This implementation allows the I²C pins to be defined with **only** two #defines.

Just add ```CFLAGS="-DI2C_MASTER_SDA_GPIO=2 -DI2C_MASTER_SCL_GPIO=12"``` (or whatever pin numbers you preffer), to your Makefile. Alternatively you can define this in ```user_config.h```

If no gpio pin numbers are assigned the default SDA=2, SCL=12 will be used.

TODO:
* Testing
* implement the added convenience methods ```i2c_master_writeRegister()``` and ```i2c_master_readRegister()```
