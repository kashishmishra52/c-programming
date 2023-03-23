#include<stdio.h>
int main()
{ int i,n,arr[50];
printf("enter size of array");
scanf("%d",&n);
for(i=0;i<=n;i++){
	printf("enter the value");
	scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++){
	printf("%d",arr[i]);
}
return 0;
}
