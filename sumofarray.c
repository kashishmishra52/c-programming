#include<stdio.h>
int main()
{ int arr[5]={1,2,3,4,5};
int i,sum=0;
for(i=0;i<=4;i++){
	sum=sum+arr[i];
}
printf("the sum of all the elements of c is %d",sum);
return 0;
}
