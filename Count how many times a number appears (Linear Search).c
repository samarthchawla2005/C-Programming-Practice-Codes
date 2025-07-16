/*Linear Search Practice 2: Count how many times a number appears


Input: An array of 10 integers and a number to count.
Output: How many times the number occurs.

*/

#include<stdio.h>

int countOccurrences(int arr[], int size, int target){
	int count = 0;
	int i;
	
	for(i = 0; i < size; i++){
		if(arr[i] == target){
			count++;
		}
	}
	return count;
}


int main(){
	int arr[10],i,key,count;
	
	printf("Enter 10 integers:\n");
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to search:");
	scanf("%d", &key);
	
	
	count = countOccurrences(arr,10,key);
	
	if(count == 0){
		printf("Number not found in the array.\n");
	}
	else{
		printf("Number %d appers %d time(s) in the array.\n",key, count);
	}
	return 0;
}
