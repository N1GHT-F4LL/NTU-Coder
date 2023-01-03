#include <stdio.h>
#include <string.h>
int Print_BinaS(int i, int n)
{
   char BinaryString[21] = "";
   int value = i, step;
   for (int step = 0; step < n; step++)
   {
      strcat(BinaryString, (value >> step) % 2 ? "1" : "0");
   }
   strrev(BinaryString);
   printf("%s", BinaryString);
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