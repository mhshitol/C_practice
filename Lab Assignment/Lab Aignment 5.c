//5.Write a program in C to make such a pattern like a pyramid with an asterisk.
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf ("Enter a number for the rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (i = 1; i<= rows; ++i)
    {
        for (j = 1; j <=i; ++j)
        {
          printf ("*");
        }
        printf ("\n");
    }
   return 0;
}
