#include <stdio.h>
int main()
{
   int n, m, g, c;
   scanf("%d %d", &n, &m);
   g = n;
   c = (m - g * 2) / 2;
   g = n - c;
   if ((g * 2 + c * 4 == m) && (g * c >= 0))
   {
      printf("%d %d", g, c);
   }
   else
   {
      printf("-1");
   }
   return 0;
}

// From N1ghtf4ll with luv