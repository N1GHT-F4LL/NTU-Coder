#include <stdio.h>

int min(int x, int y)
{
   if (x >= y)
   {
      return y;
   }
   return x;
}
int max(int x, int y)
{
   if (x >= y)
   {
      return x;
   }
   return y;
}

int main()
{
   int n, a[100001] = {}, min_value, res = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   min_value = a[0];
   for (int i = 1; i < n; i++)
   {
      res = max(a[i] - min_value, res);
      min_value = min(min_value, a[i]);
   }
   printf("%d", res);
   return 0;
}

// From N1ghtf4ll with luv