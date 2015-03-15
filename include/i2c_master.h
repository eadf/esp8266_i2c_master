#ifndef __I2C_MASTER_H__
#define __I2C_MASTER_H__

#include "c_types.h"

void i2c_master_gpio_init(void);
void i2c_master_init(void);

#define i2c_master_wait    os_delay_us
void i2c_master_stop(void);
void i2c_master_start(void);
void i2c_master_setAck(uint8_t level);
uint8_t i2c_master_getAck(void);
uint8_t i2c_master_readByte(void);
void i2c_master_writeByte(uint8_t wrdata);

bool i2c_master_checkAck(void);
void i2c_master_send_ack(void);
void i2c_master_send_nack(void);

/******************************************************************************
 * FunctionName : i2c_master_readRegister
 * Description  : Reads a given register
 * Parameters   : deviceAddr the address of the device (unshifted [0..0x7f])
 * Parameters   : regAddr the register to read
 * Parameters   : regValue the address where the result will be stored
 * Returns      : ACK/NACK status
 *******************************************************************************/
bool i2c_master_readRegister(uint8_t deviceAddr, uint8_t regAddr, uint8_t *regValue);

/******************************************************************************
 * FunctionName : i2c_master_writeRegister
 * Description  : Writes a given register
 * Parameters   : deviceAddr the address of the device (unshifted [0..0x7f])
 * Parameters   : regAddr the register to read
 * Parameters   : regValue the register value
 * Returns      : ACK/NACK status
 *******************************************************************************/
bool i2c_master_writeRegister(uint8_t deviceAddr, uint8_t regAddr, uint8_t regValue);

/******************************************************************************
 * FunctionName : i2c_master_writeRegister16
 * Description  : Writes a given 16bit register
 * Parameters   : deviceAddr the address of the device (unshifted [0..0x7f])
 * Parameters   : regAddr the register to read
 * Parameters   : regValue the register value
 * Parameters   : hbf high byte first
 * Returns      : ACK/NACK status
 *******************************************************************************/
bool i2c_master_writeRegister16(uint8_t deviceAddr, uint8_t regAddr, uint16_t regValue, bool hbf);

#endif
