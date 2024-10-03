#include <stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num==0)
	{
		printf("number entered is 0");
    }
    else if(num>0)
	{
		if(num%2==0)
		{
			printf("the number entered is positive and even");
		}
		else
		{
			printf("the number entered is positive and odd");
		}
	}
	else
	{
		printf("the number entered is negative");
	}
	return 0;
}