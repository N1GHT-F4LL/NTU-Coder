#include <stdio.h>
int main()
{
   int Num_Of_Beer, Num_Of_Beer_Drinkable;
   scanf("%d", &Num_Of_Beer);
   Num_Of_Beer_Drinkable = Num_Of_Beer;
   while (Num_Of_Beer >= 10)
   {
      Num_Of_Beer_Drinkable += (Num_Of_Beer / 10) * 3;
      Num_Of_Beer = Num_Of_Beer / 10 * 3 + Num_Of_Beer % 10;
   }
   printf("%d", Num_Of_Beer_Drinkable);
   return 0;
}

// From N1ghtf4ll with luv