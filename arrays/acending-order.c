//  program to sort an array in an ascending order.

#include <stdio.h>

int main()
{
  int n, i, j, temp;
  printf("no. of eles? ");
  scanf("%d", &n);

  int a[n];

  for (i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\nAscending Order:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", a[i]);
  }
}