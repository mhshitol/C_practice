#include<stdio.h>

int main()

{
    double a,b,add,sub,mul,div;

    printf("Enter the number a : ");
    scanf("%lf",&a);
    printf("Enter the number b : ");
    scanf("%lf",&b);

    add=a+b;
    sub=a-b;
	mul=a*b;
	div=a/b;

	printf("Addition=%.6f\n",add);
	printf("Substraction=%.6f\n",sub);
	printf("Multiply=%.6f\n",mul);
	printf("Division=%.6f\n",div);



    return 0;
}
