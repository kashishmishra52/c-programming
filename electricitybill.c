 #include<stdio.h>
 int main()
 { float bill, unit;
 printf("enter the meter readings ");
 scanf("%f",&unit);
 if(unit<100)
 {
 	bill=unit*2.25;
 	printf("total bill is %f",bill);
 }
 if(unit>100 && unit<200)
 {
 	bill=100*2.25+(unit-100)*3;
 	printf("total bill is %f",bill);
 }
 if(unit>200 && unit<500)
 {
 	bill=100*2.25+100*3.00+(unit-200)*4.25;
 	printf("total bill is %f",bill);
 }
 else if (unit>500)
 {
 	bill=100*2.25+100*3.00+100*4.25+(unit-500)*7.00;
 	printf("total bill is %f",bill);

 }
 return 0;
 }
