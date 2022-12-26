#include <stdio.h>
int main()
{
   int n, i, s = 0;
   scanf("%d", &n);
   for (i = 1; i <= n / 2; i++)
   {
      if (n % i == 0)
      {
         s += i;
      }
   }
   if (s == n)
   {
      printf("YES");
   }
   else
   {
      printf("NO");
   }
   return 0;
}

// From N1ghtf4ll with luv