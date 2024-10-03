#include <stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if (year%400==0)
	{
		printf("given year is a leap year");
	}
	else if(year%4==0 && year%100!=0)
	{
		printf("given year is a leap year");
	}
    else
	{
		printf("not a leap year");
	}
	return 0;
}