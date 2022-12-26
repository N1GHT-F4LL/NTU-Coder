#include <stdio.h>

int main()
{
   long long a[35] = {};
   int n, i;
   a[0] = 1;
   a[1] = 1;
   scanf("%d", &n);
   for (i = 2; i <= 30; i++)
   {
      a[i] = a[i - 1] + a[i - 2];
   }
   for (i = 0; i < n; i++)
   {
      printf("%lld ", a[i]);
   }
   return 0;
}

// From N1ghtf4ll with luv