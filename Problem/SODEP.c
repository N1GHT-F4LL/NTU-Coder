#include <stdio.h>

int Is_SoDep(long long x)
{
   int s = 0;
   while (x)
   {
      s += x % 10;
      x /= 10;
   }
   if (s % 10 == 9)
   {
      return 1;
   }
   return 0;
}

int main()
{
   long long n;
   scanf("%lld", &n);
   if (Is_SoDep(n))
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