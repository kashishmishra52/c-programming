#include<stdio.h>
int main()
{ int r,n;
printf("enter a number:");
scanf("%d",&n);
r=0;
while(n>0)
{ r=r*10;
r=r+(n%10);
n=n/10;
}
printf("the reversed value is %d",r);
return 0;
}
