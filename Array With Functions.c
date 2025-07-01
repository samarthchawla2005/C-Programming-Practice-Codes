//Array With Functions

/*
How to pass arrays to functions

How to use arrays inside reusable logic

Mini-exercises like finding max/min/avg using functions
*/

//Print all elements using a function

#include <stdio.h>

void printArray(int arr[], int size){
	printf("Array elements are:");
	
	int i;
	
	for(i = 0; i < size; i++){
		printf("%d",arr[i]);
	}
}


int main(){
	int numbers[5] = {1,2,3,4,5};
	printArray(numbers, 5);
	
	return 0;
}
