//Write a function that takes two integers and returns their sum. Print the result in main().

#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main()
{
	int a,b;
	
	printf("Enter first integer = ");
	scanf("%d",&a);
	
	printf("Enter second integer = ");
	scanf("%d",&b);
	
	printf("The sum of these two integers = %d",sum(a,b));
	
	return 0;
}
