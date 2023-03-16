#include<stdio.h>
#include<math.h>
int main()
{ float CI,p,r,t,a;
printf("enter principle");
scanf("%f",&p);
printf("enter rate");
scanf("%f",&r);
printf("enter time");
scanf ("%f",&t);
a=p*pow(1+r/100,t);
CI=a-p;
printf("the total amount is %f",a);
printf("the total compound interest is %f",CI);
return 0;

}
