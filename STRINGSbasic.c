#include<stdio.h>
int main()
{
	int i=0;//always remeber that null character is also counted while counting number of strings
	char arr[]="kashish is a girl";
	while(arr[i]!='\0'){
		printf("%c",arr[i]);
		i++;
	}
	return 0;
}
