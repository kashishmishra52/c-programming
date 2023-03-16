#include<stdio.h>
int main()
{ float meter,inches,centimeter,feet,distance;
printf("enter the distance in km ");
scanf("%f",&distance);
meter=distance*1000;
inches=distance*3280.54;
centimeter=distance*100000;
feet=distance*39370.1;
printf("the distance in m is %f",meter);
printf("\nthe distance in inches is %f",inches);
printf("\nthe distance in cm is %f",centimeter);
printf("\nthe distance feet is %f",feet);
return 0 ;
}
