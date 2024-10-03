#include <stdio.h>
int main()
{
	int num;
	int count=0;
	printf("enter a number");
	scanf("%d",&num);
	int ognum=num;
	while(num!=0)
	{
		if(num & 1)
		{
			count=count+1;
		}
		num=num>>1;
	}
	printf("the number of 1s in the given number are %d",count);
	
	return 0;
}