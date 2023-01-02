#include <stdio.h>
int main()
{
   int n;
   char a[101] = {}, b[101] = {};
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
   {
      if (i % 2 == 0)
      {
         for (int j = 0; j < n; j++)
         {
            printf("%c", j % 2 == 0 ? 'W' : 'B');
         }
      }
      else
      {
         for (int j = 0; j < n; j++)
         {
            printf("%c", j % 2 == 0 ? 'B' : 'W');
         }
      }
      printf("\n");
   }
   return 0;
}

// From N1ghtf4ll with luv