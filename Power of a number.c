//Write a function to calculate power of a number.

#include<stdio.h>

int power(int base, int exponent){
	int result = 1;
 	
 	int i;
 	
	for(i = 1; i <= exponent; i++){
		result *= base;
	}
	return result;
}

int main(){
	int b; int e;
	
	printf("Enter a base:-\n");
	scanf("%d", &b);
	
	printf("Enter a power:-\n");
	scanf(" %d", &e);
	
	int result = power(b,e);
	
	printf("%d^%d = %d",b,e,result);
	
	return 0;
}


