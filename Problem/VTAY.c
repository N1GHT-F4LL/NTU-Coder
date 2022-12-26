#include <stdio.h>
#include <math.h>

int main()
{
   int n, l, r;
   scanf("%d", &n);
   l = abs((n % 14) - 7);
   r = 7 - l;
   printf("%d %d", l, r);
   return 0;
}

// From N1ghtf4ll with luv