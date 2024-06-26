//  Program to compare two strings without using the standard library function in C.

#include <stdio.h>
#include <conio.h>

int compare_string(char *a, char *b)
{
  while (*a == *b)
  {
    if (*a == '\0' || *b == '\0')
      break;
    a++;
    b++;
  }

  if (*a == '\0' && *b == '\0')
    return 0;

  else
    return -1;
}

void main()
{
  char first[100], second[100], result;
  printf("Enter First String: ");
  gets(first);
  printf("Enter Second String: ");
  gets(second);
  result = compare_string(first, second);
  if (result == 0)
    printf("\nStrings are Equal.\n");
  else
    printf("Strings are NOT Equal.\n");
  getch();
}
