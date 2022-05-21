#include<stdio.h>
int main()
{

  int a,b,add,sub,multiply,division;

printf("Enter the value of a:");
  scanf("%d",&a);
printf("Enter the value of b:");
  scanf("%d",&b);
add=a+b;
  sub=a-b;
multiply=a*b;
  division=a/b;

  printf("Addition Result=%d\n",add);
printf("Substraction Result=%d\n",sub);
  printf("Multiply Result=%d\n",multiply);
printf("Division=%.3d\n",division);



    return 0;

}
