#include <stdio.h>

long long gcd(long long a, long long b)
{
   if (b == 0)
   {
      return a;
   }
   else
   {
      gcd(b, a % b);
   }
}

int main()
{
   long long num_1, num_2;
   scanf("%lld %lld", &num_1, &num_2);
   printf("%lld", gcd(num_1, num_2));
   return 0;
}

// From N1ghtf4ll with luv