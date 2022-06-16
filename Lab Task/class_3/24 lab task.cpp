#include<stdio.h>
    int main()
    {
        int i,hour,overtime;
        for(i=1;i<=10;i++)
        {
            printf("Enter the worked hour : ");
            scanf("%d",&hour);

        if(hour>40)
        {
            overtime=(hour-40)*12;
            printf("The overtime pay of employee is :%d Rs\n",overtime);
        }
        else
            printf("This employee has not done over time.\n");


        }


        return 0;
    }
