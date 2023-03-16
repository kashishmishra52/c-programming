#include<stdio.h>
int main()
{ float a,b;
char c;
printf("enter your choice +,-,*,/");
scanf("%c",&c);
printf("enter two numbers a and b");
scanf("%f%f",&a,&b);
switch(c){
	case '+':
		printf("sum is %f",a+b);
		break;
	case '-':
		printf("difference is %f",a-b);
		break;
	case'*':
		printf("multiplication is %f",a*b);
		break;
	case'/':
		printf("division is %f",a/b);
	default:
		printf("enter correct choice");
}
return 0;
}
