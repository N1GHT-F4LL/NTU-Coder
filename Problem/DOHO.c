#include <stdio.h>

int main()
{
   int h, m, s;
   scanf("%d %d %d", &h, &m, &s);
   s += 1;
   if (s == 60)
   {
      s = 0;
      m++;
      if (m == 60)
      {
         m = 0;
         h++;
         if (h == 24)
         {
            h = 0;
         }
      }
   }
   printf("%d %d %d", h, m, s);
   return 0;
}

// From N1ghtf4ll with luv