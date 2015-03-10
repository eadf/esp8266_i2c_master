#ifndef __I2C_MASTER_H__
#define __I2C_MASTER_H__

void i2c_master_gpio_init(void);
void i2c_master_init(void);

#define i2c_master_wait    os_delay_us
void i2c_master_stop(void);
void i2c_master_start(void);
void i2c_master_setAck(uint8 level);
uint8 i2c_master_getAck(void);
uint8 i2c_master_readByte(void);
void i2c_master_writeByte(uint8 wrdata);

bool i2c_master_checkAck(void);
void i2c_master_send_ack(void);
void i2c_master_send_nack(void);

/**
 * Reads a given register
 */
bool i2c_master_readRegister(uint8_t deviceAddr, uint8_t regAddr, uint8_t *regValue);

/**
 * Writes a given register
 */
bool i2c_master_writeRegister(uint8_t deviceAddr, uint8_t regAddr, uint8_t regValue);

#endif
