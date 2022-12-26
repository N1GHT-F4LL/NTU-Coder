#include <stdio.h>
#include <string.h>
int main()
{
   char str[256] = "";
   int sum = 0;
   fflush(stdin);
   gets(str);
   for (int i = 0; i < strlen(str); i++)
   {
      sum += str[i] - '0';
   }
   printf("%d", sum);
   return 0;
}

// From N1ghtf4ll with luv