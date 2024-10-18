#include<stdio.h>
#include<string.h>
main(){
	char str[20], c;
    int count, i;

  printf("Enter any string: ");
  gets(str);
  
  printf("Frequency of each letter: \n");
  
  for (c = 'a'; c <= 'z'; c++)
  {
    count = 0;
    i = 0;
    while (str[i] != '\0')
    {

      if (c == str[i])
      {
        count++;
      }

      i++;
    }

    if (count != 0)
    {
      printf("%c= %d\n", c, count);
    }
  }
}
  
