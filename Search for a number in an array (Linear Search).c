//Linear Seach Practice 1: Search for a number in an array

/*	Input: An array of 10 integers and a number to search.
Output: Print the index if found, otherwise print "Not found".
*/

#include<stdio.h>

int linearSearch(int arr[], int size, int target){
	int i;
	for(i=0; i<size; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int arr[10],i,key,index;
	
	printf("Enter 10 integers:\n");
	
	for(i = 0; i < 10; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to search\n");
	scanf("%d",&key);
	
	index = linearSearch(arr,10,key);
	
	if(index == -1){
		printf("Not Found");
	}
	else{
		printf("Number found at index %d (position %d).\n",index,index+1);
	}
	
	return 0;
}
