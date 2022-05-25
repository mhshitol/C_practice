#include<stdio.h>

int main()
{
    double km,meter,feet,inches,centimeter;

    printf("Enter the value of distance : ");
    scanf("%lf",&km);

    meter=km*1000;
    feet=km*3280.84;
    inches=km*39370.1;
    centimeter=km*100000;

    printf("The distance between Mirpur and Ashulia is :%.5lf\n",meter);
    printf("The distance between Mirpur and Ashulia is :%.5lf\n",feet);
    printf("The distance between Mirpur and Ashulia is :%.5lf\n",inches);
    printf("The distance between Mirpur and Ashulia is :%.5lf\n",centimeter);

    return 0;




}
