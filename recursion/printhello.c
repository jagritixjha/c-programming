// Program to print "hello world!" a given number of times using recursion in C.

#include <stdio.h>

    void
    printhello(int count);

int main()
{
  printhello(5);
  return 0;
}

void printhello(int count)
{
  if (count == 0)
  {
    return;
  }
  printf("hello world!\n");
  printhello(count - 1);
}