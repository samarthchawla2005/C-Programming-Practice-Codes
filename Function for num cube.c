//Write a function that takes a number and returns its cube. Print the result in main().

#include<stdio.h>

int cube(int n){
	return n*n*n;
}

int main()
{
	int n;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	
	printf("The cude of this number is = %d",cube(n));
	
	return 0;
}
