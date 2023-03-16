#include<stdio.h>
int main()
{int i,n,m;
printf("enter the upper and lower limit:");
scanf("%d%d",&m,&n);
for(i=n;i<=m;i++){
	if(i%2==0){
		printf("%d\n",i);
	}
}
return 0;   
}
