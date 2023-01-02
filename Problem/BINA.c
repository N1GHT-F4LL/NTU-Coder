#include <stdio.h>
int main()
{
   int n, bina[65] = {}, count = 0;
   scanf("%d", &n);
   do
   {
      bina[count] = n % 2;
      n /= 2;
      count++;
   } while (n != 0);
   for (int i = 0; i < count; i++)
   {
      printf("%d", bina[count - i - 1]);
   }
   return 0;
}

// From N1ghtf4ll with luv