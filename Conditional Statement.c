//Conditional Statements

#include<stdio.h>

int main(){
	
	int age;
	
	printf("Enter your age\n");
	scanf("%d",&age);
	
//If statement	
	
	if(age>=18)
	{
		printf("You are eligible to vote");
	}
//Else statement
	else
	{
		printf("You are not eligible to vote");
	}
	return 0;
	
}
