#include <stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>0 && age<=12 )
	{
		printf("child");
	}
	else if(age>=13 && age<=19)
	{
		printf("teenager");
	}
	else if(age>19 && age<=50)
	{
		printf("adult");
	}
	else
	{
		printf("senior");
	}
	return 0;
}