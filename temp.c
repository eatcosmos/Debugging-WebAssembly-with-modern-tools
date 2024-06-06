#include <stdlib.h>
void assert_less(int x, int y)
{
  if (x <= y)
  {
    abort(); //abort()是哪里的函数，什么功能
  }
}

int main()
{
  assert_less(1, 2);
  assert_less(2, 1);
}
// emcc -g temp.c -o temp.html
// 方法