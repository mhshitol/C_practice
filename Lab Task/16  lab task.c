#include <stdio.h>
int main()

{
  int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 400 == 0)
   {
      printf(" is a leap year.", year);
   }

   else if (year % 100 == 0)
   {
      printf(" is not a leap year.", year);
   }

   else if (year % 4 == 0)
   {
      printf(" is a leap year.", year);
   }

   else
   {
      printf(" is not a leap year.", year);
   }


    return 0;
}
