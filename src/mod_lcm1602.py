

if __name__=='__main__':
    I2C_FILE_NAME="/dev/i2c-0"

    i2c_dev = open_i2c(I2C_FILE_NAME, 0x3f)
    print(  i2c_dev )

    lcd = lcd_instance()
    print(lcd)
    lcd_init( lcd , i2c_dev )
    lcd_clear(lcd)

    for i,MSG in enumerate(["Hello",'World']):
        lcd_print(lcd,MSG,len(MSG),i)

    close_i2c( i2c_dev )

