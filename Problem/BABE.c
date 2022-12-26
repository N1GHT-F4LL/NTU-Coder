#include <stdio.h>

int Sum_Of_Div(int x)
{
   int s = 0, i = 1;
   for (i = 1; i <= x / 2; i++)
   {
      if (x % i == 0)
      {
         s += i;
      }
   }
   return s;
}

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);
   if ((Sum_Of_Div(a) == b) && (Sum_Of_Div(b) == a))
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