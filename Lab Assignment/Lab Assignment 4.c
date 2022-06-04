//4.Write a program in C to make such a pattern like a pyramid with numbers increased by 1
#include<stdio.h>
int main()
{
    int i,j,rows,c=2;
    printf ("Enter a number for the rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (i = 2; i<= rows; ++i)
    {
        for (j = 1; j <=i; ++j)
        {
          printf ("%d",c++);
        }
        printf ("\n");
    }
   return 0;
}
