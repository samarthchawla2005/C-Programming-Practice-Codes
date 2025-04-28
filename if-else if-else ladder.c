//if-else if-else ladder
//Used for checking multiple conditions step-by-step

#include<stdio.h>

int main()
{
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	
	if(marks>100)
	{
		printf("Invalid marks. Please check & enter your score again");
	}
	else if(marks==100)
	{
		printf("You have scored full marks & your grade is A");
	}
	
	else if(marks >=90)
	{
		printf("Grade A");
	}
	else if(marks>=75)
	{
		printf("Grade B");
	}
	else if(marks>=60)
	{
		printf("Grade C");
	}
	else if(marks>=45)
	{
		printf("Grade D");
	}
	else if(marks>=30)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F\n");
		printf("You are FAIL");
	}
}
