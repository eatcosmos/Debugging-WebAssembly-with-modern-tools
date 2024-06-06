https://developer.chrome.com/blog/wasm-debugging-2020?hl=zh-cn

emcc -g temp.c -o temp.html

emcc -g mandelbrot.cc -o mandelbrot.html \
     -s USE_SDL=2 \
     -s ALLOW_MEMORY_GROWTH=1

emcc -g temp.c -o temp.html \
     -O3 -fno-inline \
     -gseparate-dwarf=temp.debug.wasm \
     -s SEPARATE_DWARF_URL=file://[local path to temp.debug.wasm] # 这个是访问者本地的调式信息
  
#
emcc -g mandelbrot.cc -o index.html \
     -s USE_SDL=2 \
     -s ALLOW_MEMORY_GROWTH=1