//Function with parameters

#include<stdio.h>

//Function Declaration
void add(int a, int b);

int main(){
	add(10, 20); //Function Call
	return 0;
}

//Function Declaration
void add(int a, int b)
{
	int sum = a+b;
	printf("Sum is: %d\n",sum);
}
