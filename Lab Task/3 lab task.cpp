#include<stdio.h>

int main()
{
    int subject_1,subject_2,subject_3,subject_4,subject_5,aggregate;
    double percentage;

    printf("Enter the number of 1st subject : ");
    scanf("%d",&subject_1);
    printf("Enter the number of 2nd subject : ");
    scanf("%d",&subject_2);
    printf("Enter the number of 3rd subject : ");
    scanf("%d",&subject_3);
    printf("Enter the number of 4th subject : ");
    scanf("%d",&subject_4);
    printf("Enter the number of 5th subject : ");
    scanf("%d",&subject_5);

    aggregate=subject_1+subject_2+subject_3+subject_4+subject_5;
    percentage=aggregate*(100.00/500.00);

    printf("Aggregate number is =%d\n",aggregate);
    printf("Percentage number is =%.2f",percentage);


    return 0;

}
