#include<stdio.h>
#include <math.h>
int main ()
{ float p,r,t,CI,A;
printf("enter principle");
scanf("%f",&p);
printf("enter rate");
scanf("%f",&r);
printf("enter time");
scanf("%f",&t);
A=p*pow(1+r/100,t);
CI=A-p;
printf("the compound interest is %f",CI);
return 0;
}
