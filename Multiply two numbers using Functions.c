//Multiply two numbers using Functions

#include<stdio.h>

void multiply(int a, int b);

int main(){
	multiply(10,20);
	return 0;
}

void multiply(int a, int b)
{
	int multiply = a*b;
	printf("Product = %d\n",multiply);
}
