#include <stdio.h>
#include <math.h>
int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   printf("%d", (int)log2(b / a));
   return 0;
}

// From N1ghtf4ll with luv