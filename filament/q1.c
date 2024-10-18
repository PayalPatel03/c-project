#include <stdio.h>
 main()
{
  int i = 0,j=0, p = 0;
  char str[20];

  printf("Enter any string:");
  gets(str);

  while (str[i] != '\0')
  {
    i++;
  }

  for ( j = 0; j < i; j++)
  {
    if (str[j] != str[i - 1])
    {
      printf("The given string is not a Palindrome.");
      p = 1;
      break;
    }
  }

  if (p != 1)
  {
    printf("The given string is a Palindrome.");
  }
}
