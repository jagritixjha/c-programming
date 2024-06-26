//  Program to modify and display the values of var1iables using an array of pointers in C.

#include <stdio.h>
int main()
{
  int a, b, c;
  int *ptr[3];

  ptr[0] = &a;
  ptr[1] = &b;
  ptr[2] = &c;

  a = 100;
  b = 200;
  c = 300;

  printf("Value of a: %d, b: %d, c: %d\n", *ptr[0], *ptr[1], *ptr[2]);

  *ptr[0] += 10;
  *ptr[1] += 10;
  *ptr[2] += 10;

  printf("After adding 10\nvalue of a: %d, b: %d, c: %d\n", *ptr[0], *ptr[1], *ptr[2]);
}
