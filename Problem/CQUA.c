#include <stdio.h>
#include <string.h>
int main()
{
   int n, Num_Of_100 = 0, Num_Of_200 = 0, Temp_Value;
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &Temp_Value);
      if (Temp_Value == 100)
      {
         Num_Of_100++;
      }
      else
      {
         Num_Of_200++;
      }
   }
   if (Num_Of_100 == 0)
   {
      if (Num_Of_200 % 2 == 0)
      {
         printf("YES");
      }
      else
      {
         printf("NO");
      }
      return 0;
   }
   if (Num_Of_100 % 2 == 0)
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