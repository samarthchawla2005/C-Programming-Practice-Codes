//Search & Count Occurrences

/*
 Problem Statement:

Input: An array of 10 integers and a number to search.
Output: Print how many times the number appears in the array.
*/

#include <stdio.h>

int linearSearch(int a[], int size, int target){
	int i;
	for(i=0; i<size; i++){
		if(a[i] == target){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[10], key, i, index;
	
	printf("Enter 10 numbers\n");
	
	for( i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter a number to search\n");
	scanf("%d",&key);
	
	index = linearSearch(a,10,key);
	
	if(index == -1){
		printf("Not Found");
	}
	else{
		printf("Number found at index %d (position %d).\n",index,index+1);
	}
	
	return 0;	
}
