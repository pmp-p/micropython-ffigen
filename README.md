Original :
--------
micropython-ffigen is experimental tool to generate external library bindings
for ffi/uctypes modules of MicroPython https://github.com/micropython/micropython
from C header files.

micropython-ffigen depends on c2ffi tool (https://github.com/rpav/c2ffi),
which in turn depends on LLVM and Clang (http://llvm.org/).


Now:
----
micropython-ffigen is experimental tool to generate libraries and bindings

* lib goes into:
  `${MICROPYHOME}/lib-dynload/_${module_name}-(android/linux)-(arch).so`

* python glue code and module body get concat into:
  `${MICROPYHOME}/site-packages/${module_name}/__init__.py`


main goal of this new tool is to ease rebuilding H3Droid sdk and eventually support multiarch.


example of module header produced on the test lib provided : 

 
```python
import os
import sys
import ffi
import uctypes
if os.access("/system/bin/linker64",0):l="android-armv8"
elif os.access("/system/bin/linker",0):l="android-armv7"
else: l= "linux-%s" % os.popen('arch').read().strip()
l = "_lcm1602-%s.so" % l
l = "%s/%s" %( '%s/lib-dynload' % os.getenv('MICROPYHOME','.') , l )
print("Loading native lib",l,file=sys.stderr)
l = ffi.open(l)

i2c_open = l.func("i", "i2c_open", "pB")
i2c_close = l.func("v", "i2c_close", "i")
set_i2c_data = l.func("i", "set_i2c_data", "iB")
get_i2c_data = l.func("i", "get_i2c_data", "ip")
_lcd = {
    "dim": uctypes.UINT8 | 0,
    "dev": uctypes.INT32 | 4,
}
lcd_instance = l.func("p", "lcd_instance", "")
lcd_notify = l.func("v", "lcd_notify", "p")
lcd_cmd = l.func("v", "lcd_cmd", "pB")
lcd_init = l.func("v", "lcd_init", "pi")
lcd_backlight = l.func("v", "lcd_backlight", "p")
lcd_putc = l.func("v", "lcd_putc", "pB")
lcd_print = l.func("v", "lcd_print", "ppBB")
lcd_clear = l.func("v", "lcd_clear", "p")
lcd_set_cursor = l.func("v", "lcd_set_cursor", "pBB")
lcd_add_char = l.func("v", "lcd_add_char", "ppB")

del l
# ===============================================================================

if __name__=='__main__':
  ...
```
