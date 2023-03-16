#include<stdio.h>
int main()
{ int a,i,s=0,p=1;
printf("enter a digit ");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
	p=p*i;
	s=s+p;
}
printf("output is:%d",s);
return 0;
}
