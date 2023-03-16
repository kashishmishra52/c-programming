#include<stdio.h>
int main()
{ float phy,che,eng,python,physical_edu,p;
printf("enter the marks of phy");
scanf("%f",&phy);
printf("enter the marks of che");
scanf("%f",&che);
printf("enter the marks of eng");
scanf("%f",&eng);
printf("enter the marks of python");
scanf("%f",&python);
printf("enter the marks of physical_edu");
scanf("%f",&physical_edu);
p=(phy+eng+che+python+physical_edu)/500*100;
if(p>60)
printf("you are passed by first division %f",p);
else if (p>50 && p<59)
printf("you are passed by second division%f",p);
else if (p>40 && p<49)
printf("you are passed by third division%f",p);
else if (p<40)
printf("bsdk you are failed!!!!! kutte padhle %f",p);
return 0;
}
