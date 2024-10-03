#include <stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	num>0? printf("number is positive"):num<0? printf("number is negative"): printf("number is 0");
	return 0;
}