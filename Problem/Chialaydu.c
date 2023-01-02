#include <stdio.h>
int main()
{
   int n, k, i, Is_Duplicate[100001] = {}, temp_val, res = 0;
   scanf("%d %d", &n, &k);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &temp_val);
      if (!Is_Duplicate[temp_val % k])
      {
         res++;
         Is_Duplicate[temp_val % k] = 1;
      }
   }
   printf("%d", res);
   return 0;
}

// From N1ghtf4ll with luv