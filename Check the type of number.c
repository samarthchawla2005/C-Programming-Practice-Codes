//Check the type of number

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("It is 0");
	}
	else if(num>0)
	{
		printf("It is a positive number");
	}
	else if(num<0)
	{
		printf("It is a negative number");
	}
	
	return 0;
}
