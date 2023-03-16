#include<stdio.h>
int main()
{int a,b,sum,n,i;
printf("enter a number");
scanf("%d",&n);
a=1;
b=1;
sum=1;
for(i=1;i<=n-2;i++){
	sum=a+b;
	a=b;
	b=sum;
	
}
printf("the %d fibonacci sum is %d\n",n,sum);
return 0;

}
