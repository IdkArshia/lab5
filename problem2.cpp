#include <stdio.h>
int main()
{
	int att,mid,assignments,final,total;
	printf("enter attendance percentage of student");
	scanf("%d",&att);
	printf("enter total assignment marks out of 20 of student");
	scanf("%d",&assignments);
	printf("enter mids marks out of 30 of student");
	scanf("%d",&mid);
	printf("enter final marks out of 40 of student");
	scanf("%d",&final);
	//attendance has a weightage of 10 marks, less than 70 attendance cannot sit in final exam
	if (att<70)
	{
		final=0;
		att=att/10;
	}
	else
	{
		att=att/10;
	}
	total=final+mid+assignments+att;
	if (total>=80)
	{
		printf("grade:A");
	}
	else if (total>=70)
	{
		printf("grade:B");
	}
	else if (total>=60)
	{
		printf("grade:C");
	}
	else if (total>=50)
	{
		printf("grade:D");
	}
	else 
	{
		printf("fail");
	}
	return 0;
}