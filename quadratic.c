#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,R1,R2,d;
printf("enter a,b,c:");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0){

R1=-b+sqrt(d)/2*a;
R2=-b-sqrt(d)/2*a;
printf("the real root ARE %f%f",R1,R2);}
else if(d==0){

R1=-b/2*a;
R2=-b/2*a;
printf ("roots are equal %f%f",R1,R2);}
else
printf("roots are imaginary!!!!!!!!!!!");
}
