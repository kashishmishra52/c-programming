#include<stdio.h>
int main()
{int arr[50];
int rev_arr[50];
int n,i;
printf("enter the size if array");
scanf("%d",&n);
for(i=0;i<=n;i++){
	printf("enter the values");
	scanf("%d",&arr[i]);
}
for(i=0;i<=n;i++){
	rev_arr[i]=arr[n-i];
}
for(i=0;i<=n;i++)
printf("%d",rev_arr[i]);
return 0;


}
