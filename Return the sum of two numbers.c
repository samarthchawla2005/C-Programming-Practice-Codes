//Functions with Return Value
	//Return the sum of two numbers

#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int main()
{
	int result = add(5,10);
	printf("Sum is = %d",result);
	
	return 0;
}
