#include<stdio.h>
int main()
{ int arr[50];
int n,i,a=1;
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<=n;i++){
	printf("enter the values");
	scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++){
	a=a*arr[i];
}
printf("the product is %d",a);
return 0;
}
