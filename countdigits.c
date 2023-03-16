#include<stdio.h>
int main()
{int i,n;
printf("enter a number");
scanf("%d",&n);
int count=0;
while(n!=0){
n=n/10;
count++;}
printf("the no. of digits in given number are %d",count);
}
