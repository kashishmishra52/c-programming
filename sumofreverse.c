int main()
{ int r,n,sum;
printf("enter a number:");
scanf("%d",&n);
sum=n+r;
r=0;
while(n>0)
{ r=r*10;
r=r+(n%10);
n=n/10;
}
printf("the sum is %d",sum);
return 0;
}
