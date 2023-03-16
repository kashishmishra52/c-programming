#include<stdio.h>
int main()
{ int i,s=0,n;
printf("enter digit");
scanf("%d",&n);
for(i=1;i<=n;i++){
	s=s+i;
}
printf("sum of series is:%d",s);
return 0;
}
