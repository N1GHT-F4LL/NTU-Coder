#include <stdio.h>

int main()
{
   int i, n;
   long long res = 1;
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      res *= i;
   }
   printf("%lld", res);
   return 0;
}

// From N1ghtf4ll with luv