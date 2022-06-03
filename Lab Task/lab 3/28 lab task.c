#include<stdio.h >

int main()
{
    int a,count=0,i;

    printf("Enter the number : ");
    scanf("%d",&a);

    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
            break;

        }

    }
        if(count==0)

            {
                printf("Prime Number");

            }

        else
        {
            printf("Not Prime Number");
        }

    return 0;
}
