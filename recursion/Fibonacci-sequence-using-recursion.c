// Program to calculate the fibonacci of a number using recursion.

#include <stdio.h>

int fibonacci();

int main()
{
  int result = fibonacci(6);
  printf("Fibonacci: %d\n", result); // Output: Fibonacci: 8
  return 0;
}

// int fibonacci(int n)
// {
//   if (n <= 1)
//   {
//     return n;
//   }
//   return fibonacci(n - 1) + fibonacci(n - 2);
// }

int fibonacci(int n) // alternative way
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }
  int fibNm1 = fibonacci(n - 1);
  int fibNm2 = fibonacci(n - 2);
  int fibN = fibNm1 + fibNm2;
  return fibN;
}