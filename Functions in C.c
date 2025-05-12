//Functions in C

#include<stdio.h>

//Function declaration
void printMessage();  //It tells the compiler that  there's a function named printMessage that returns void and doesn't take any parameters.

int main(){
	//Calling the function
	printMessage();
	return 0;
}

//Function definition
void printMessage(){
	printf("Hello, this is a simple function!\n");
}
