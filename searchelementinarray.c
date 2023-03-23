#include<stdio.h>
int main()
{ int arr[8]={1,2,3,4,5,6,7,8,9};
int i,n;
printf("enter the element you want to search");
scanf("%d",&n);
for(i=0;i<8;i++){
	if(arr[i]==n){
	printf("\nelement %d exist at index %d",n,i);
	;}}
    
return 0;}

