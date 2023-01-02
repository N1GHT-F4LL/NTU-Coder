#include <stdio.h>

int main()
{
   int mmax = 0, n, a[101], i, j, res = 0, temp;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (i = 0; i < n - 1; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   for (i = 0; i < n; i++)
   {
      if (a[i] >= res)
      {
         res++;
      }
   }
   printf("%d", res);
   return 0;
}

// From N1ghtf4ll with luv