#include<stdio.h>
int main()
{
    int i,num,sum=0;
    float avg;

    printf("Enter The 10 Number : \n");

    for (i=1;i<=10;i++)
    {
        printf("Number-%d :",i);
         scanf("%d",&num);

         sum +=num;

    }
    avg=sum/10.0;
    printf("The Sum of 10 number is :%d\n",sum);
    printf("The Average is :%f\n",avg);

    return 0;
}
