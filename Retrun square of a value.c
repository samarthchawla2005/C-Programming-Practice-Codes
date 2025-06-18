//Functions with Return Value
	//Return square of a number
	
#include<stdio.h>

int square(int x){
	return x*x;
}

int main(){
	int result = square(7);
	printf("Square = %d",result);
	return 0;
}
