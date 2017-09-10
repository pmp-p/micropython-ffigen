//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __I2C_H__
#define __I2C_H__

#define I2C_OK                0
#define I2C_ERROR             1

int open_i2c(const char* dev_path, unsigned char addr);
void close_i2c(int dev);
int set_i2c_data(int dev, unsigned char val);
int get_i2c_data(int dev, unsigned char *value);

#endif
//Copyright (c) 2014, Giovanni Dante Grazioli (deroad)
#ifndef __LCD_I2C_H__
#define __LCD_I2C_H__

typedef unsigned char u8;
typedef struct _lcd{
   u8  dim;
   int dev;
}lcd;

lcd* lcd_instance();

void lcd_notify(lcd* l);
void lcd_cmd(lcd* l, u8 cmd);
void lcd_init(lcd* l, int dev);
void lcd_backlight(lcd* l);
void lcd_putc(lcd* l, u8 c);
void lcd_print(lcd* l, const char* t, u8 len, u8 line);
void lcd_clear(lcd* l);
void lcd_set_cursor(lcd* l, u8 col, u8 row);
/* not tested yet */
void lcd_add_char(lcd* l, const unsigned char font[8], u8 position);

#endif /*__LCD_I2C_H__*/

