#include<stdio.h>
int main()
{ int arr[10]={1,2,2,2,2,1,4,4,5,5,5,5};
int n, i,count;
printf("enter the element to find frequency");
scanf("%d",&n);
for(i=0;i<10;i++){
	if(arr[i]==n)
	count++;
}
printf("the frequency of an element %d is %d",n,count);
return 0;

}
