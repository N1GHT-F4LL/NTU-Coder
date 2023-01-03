#include <stdio.h>
int min(int a, int b)
{
   return a < b ? a : b;
}
int main()
{
   int n, a[100001], lowest = 1000000000, temp;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n - 1; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (a[i] > a[j])
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
   }
   for (int i = 0; i < n - 1; i++)
   {
      lowest = min(lowest, a[i + 1] - a[i]);
   }
   printf("%d", lowest);
   return 0;
}

// From N1ghtf4ll with luv
