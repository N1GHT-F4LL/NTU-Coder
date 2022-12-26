#include <stdio.h>
long long Sum_Of_Digit(long long x)
{
   long long temp = x;
   long long sum = 0;
   while (temp != 0)
   {
      sum += temp % 10;
      temp /= 10;
   }
   return sum;
}
int main()
{
   long long n;
   scanf("%lld", &n);
   if (n % Sum_Of_Digit(n) == 0)
   {
      printf("%d", 1);
   }
   else
   {
      printf("%d", 0);
   }
   return 0;
}

// From N1ghtf4ll with luv