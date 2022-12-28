#include <stdio.h>

int main()
{
   int n, a[1001] = {}, count_0 = 0, sum = 0;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (a[i] < a[j])
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
      if (a[i] > count_0)
      {
         sum += a[i] - count_0;
         count_0++;
      }
   }
   printf("%d", sum);
   return 0;
}

// From N1ghtf4ll with luv