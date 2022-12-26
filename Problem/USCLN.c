#include <stdio.h>

int max(int a, int b)
{
   if (a > b)
   {
      return a;
   }
   return b;
}

int main()
{
   int a, b, i, ucln;
   scanf("%d %d", &a, &b);
   for (i = 1; i <= max(a, b); i++)
   {
      if ((a % i == 0) && (b % i == 0))
      {
         ucln = i;
      }
   }
   printf("%d", ucln);
   return 0;
}

// From N1ghtf4ll with luv