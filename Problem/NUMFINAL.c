#include <stdio.h>

int main()
{
   int a, n, res = 1;
   scanf("%d %d", &a, &n);
   for (int i = 1; i <= n; i++)
   {
      res *= a;
      res %= 10;
   }
   printf("%d", res);
   return 0;
}

// From N1ghtf4ll with luv