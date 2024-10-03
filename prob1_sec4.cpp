#include <stdio.h>
int main()
{
	int n1,n2,temp;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	temp=n1^n2;
	n1=temp^n1;
	n2=temp^n2;
	printf("first number is:%d \n",n1);
	printf("second number is:%d",n2);
	return 0;
}