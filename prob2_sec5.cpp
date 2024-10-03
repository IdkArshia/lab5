#include <stdio.h>
int main()
{
	int num,sum,x,flag;
	sum=0;
	flag=0;
	printf("enter a number");
	scanf("%d",&num);
	//outer loop continues to add digits if sum is greater than 10
	while(flag==0)
	{
		//inner loop adds digits of the number
	  do
	  {
		  x=num%10;
		  sum=sum+x;
		  num=num/10;
	  }
	  while(num!=0);
	// checking if the sum is greater than 10
	if(sum>=10)
	{
		num=sum;
		sum=0;
	}
	else
	{
		flag=1;
	}
    }
    printf("%d",sum);

	return 0;
	
}