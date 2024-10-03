#include <stdio.h>
int main()
{
	int n1,n2;
	printf("enter first number ");
	scanf("%d",&n1);
	printf("enter second number ");
	scanf("%d",&n2);
	n1>n2?printf("first number is greater than the second"):printf("second number is greater than the first");
	return 0;
}