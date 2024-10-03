#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	printf("enter third number");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3)
	{
		printf("first number is the greatest");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("second number is the greatest");
	}
	else
	{
		printf("third number is the greatest");
	}
	return 0;
}