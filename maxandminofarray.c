#include<stdio.h>
int main()
{int arr[7]={12,5,6,4,7,8,29,19};
int i,min=arr[0 ];
for(i=1;i<=6;i++){
	if(min>arr[i]){
	min=arr[i];
	}	
}
	printf("min is %d",min);


return 0;}

