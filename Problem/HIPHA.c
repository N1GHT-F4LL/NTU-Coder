#include <stdio.h>
#include <math.h>

int main()
{
   int n, s = 0, temp, i;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &temp);
      s += (temp - 1) ? -1 : +1;
   }
   printf("%d", abs(s));
   return 0;
}

// From N1ghtf4ll with luv