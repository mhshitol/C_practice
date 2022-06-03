#include<stdio.h>
int main()
{
	int number,sum,a,b,c,d,e,d1,d2,d3,d4,d5;

	printf("Enter the 5 digit number: ");
	scanf("%d",&number);

	a=number/10;     //1234
	d5=number%10;    //5
	b=a/10;          //123
	d4=a%10;         //4
	c=b/10;          //12
	d3=b%10;         //3
	d=c/10;          //1
	d2=c%10;         //2
	e=d/10;          //0
	d1=d%10;         //1

	sum=d1+d2+d3+d4+d5;

	printf("Reverse order : ");
	printf("%d\t %d\t %d\t %d\t %d\t ",d5,d4,d3,d2,d1);

	return 0;


}
