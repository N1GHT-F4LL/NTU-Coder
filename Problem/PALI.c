#include <stdio.h>

int Is_Pali(int x)
{
   int a[10] = {}, num_of_digit = 0, value = x;
   while (value != 0)
   {
      a[num_of_digit] = value % 10;
      value /= 10;
      num_of_digit++;
   }
   for (int i = 0; i < num_of_digit; i++)
   {
      if (a[i] != a[num_of_digit - i - 1])
      {
         return 0;
      }
   }
   return 1;
}
int main()
{
   int n, value;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &value);
      if (Is_Pali(value))
      {
         printf("%d ", value);
      }
   }
   return 0;
}

// From N1ghtf4ll with luv