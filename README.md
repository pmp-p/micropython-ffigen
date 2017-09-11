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
  ${MICROPYPATH}/lib-dynload/_${module_name}-${upy-version}-${TRIPLE or arch}.so

* python glue code and module body get concat into:
  ${MICROPYPATH}/site-packages/${module_name}/__init__.py


main goal of this new tool is to ease rebuilding H3Droid sdk and eventually support multiarch.


example of module header produced on the test lib provided : 

 
```python
import os
import sys
import ffi
import uctypes

l = "_lcm1602-%s-%s.so" % ( '.'.join( map(str,sys.implementation.version)), os.getenv('TRIPLE',os.popen('arch')) )
l = "%s/%s" %( '%s/lib-dynload' % os.getenv('MICROPYPATH','.') , l )
print("Loading native lib",l,file=sys.stderr)
l = ffi.open(l)

open_i2c = l.func("i", "open_i2c", "pB")
close_i2c = l.func("v", "close_i2c", "i")
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

# ===============================================================================


if __name__=='__main__':
  ...
```
