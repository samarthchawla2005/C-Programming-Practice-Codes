//Arrays

//An array is a collection of multiple values of the same type stored in contiguous memory locations, and accessed using indexes.

#include<stdio.h>

int main()
{
	int marks[5];  //Declaring array of size 5
	int i;
	
	for(i=0; i<5; i++){
		printf("Enter Marks %d\n",i+1);
		scanf("%d", &marks[i]);
	}
	
	printf("you have entered:\n");
	for(i=0; i<5; i++){
		printf("Mark %d = %d\n", i+1, marks[i]);
	}
	
	return 0;
}
