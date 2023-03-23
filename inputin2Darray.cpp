#include<stdio.h>
int main()
{int r,c;
printf("enter the  number of rows:");
scanf("%d",&r);
printf("enter number of coloumn:");
scanf("%d",&c);
int arr[r][c];
int i,j;
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("enter the values in matrix %d%d =",i,j);
		scanf("%d",&arr[i][j]);
	}
}
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
return 0;
}
