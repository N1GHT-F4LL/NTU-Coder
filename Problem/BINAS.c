#include <stdio.h>
int Print_BinaS(int i, int n)
{
   int bina[65] = {}, count = 0, value = i;
   do
   {
      bina[count] = value % 2;
      value /= 2;
      count++;
   } while (value != 0);
   for (int j = 0; j < n; j++)
   {
      printf("%d", bina[n - j - 1]);
   }
   return 0;
}
int main()
{
   int n, max = 1;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
   {
      max *= 2;
   }
   for (int i = 0; i < max; i++)
   {
      Print_BinaS(i, n);
      printf("\n");
   }
   return 0;
}

// From N1ghtf4ll with luv