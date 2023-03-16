#include<stdio.h>
int main()
{int n,sum=0,lastdigit;
printf("enter a number");
scanf("%d",&n);
while(n!=0){
	lastdigit= n % 10;
	sum= sum + lastdigit;
	n=n/10;
}
printf("the sum of the digit is %d",sum);
return 0;
}
