#include <stdio.h>
#include <math.h>

int Is_Prime(long long x)
{
   long long i;
   if (x < 2)
   {
      return 0;
   }
   for (i = 2; i <= sqrt(x); i++)
   {
      if (x % i == 0)
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   long long n;
   scanf("%lld", &n);
   if (Is_Prime(n))
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