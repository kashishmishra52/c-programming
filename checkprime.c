#include<stdio.h>
int main()
{int i,n,a;
printf("enter a number");
scanf ("%d",&n);
a=0;
for(i=2;i<=n-1;i++){
	if(n%2==0){
	a=1;
	break;
}
}
if(a==0)
printf("the given number is prime\n");
else
printf("the given numbr is composite\n");
return 0;
}
