#include <stdio.h>
int main()
{
	int age,income,cs;
	printf("enter age");
	scanf("%d",&age);
	printf("enter income");
	scanf("%d",&income);
	printf("enter credit score");
	scanf("%d",&cs);
	if (age>=18 && income>=30000 && cs>=580)
	{
		printf("eligible for loan");
	}
	else
	{
		printf("not eligible for loan");
		
	}
	return 0;
}