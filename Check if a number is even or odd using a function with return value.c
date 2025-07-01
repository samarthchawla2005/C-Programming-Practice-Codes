//Check if a number is even or odd using a function with return value

/*
 Task:
Create a function int isEven(int n) that:

Returns 1 if the number is even

Returns 0 if it's odd

In main(), get the number from the user

Print "Even" or "Odd" based on the return value
*/

#include <stdio.h>

int isEven(int n){
	if(n%2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	
	if(isEven(n)){
		printf("It is Even\n");
	} else {
		printf("It is Odd\n");
	}
	
	return 0;
}
