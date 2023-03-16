int main()
{ int n,i;
printf("enter a number:");
scanf("%d",&n);
int product=1;
for(i=1;i<=n;i++){
	product=product*i;
}
printf("the factorial of given number is %d",product);
return 0;}
