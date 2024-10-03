#include <stdio.h>
int main()
{
	int age,cit;
	printf("enter your age ");
	scanf("%d",&age);
	printf("enter 1 if you are a citizen and 0 if not ");
	scanf("%d",&cit);
	if(age>=18 && cit==1)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote");
	}
	return 0;
}