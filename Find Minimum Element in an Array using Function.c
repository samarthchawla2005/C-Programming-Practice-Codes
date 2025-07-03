//Find Minimum Element in an Array using Function

#include <stdio.h>

int findMin(int arr[], int size){
	int min = arr[0];
	int i;
	
	for(i=1; i<size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int num[5],i,min;
	
	printf("Enter a number:\n");
	
	for(i=0; i<5; i++){
		printf("Element %d = ",i+1);
		scanf("%d", &num[i]);
	}
	
	min = findMin(num, 5);
	printf("The minimum number is: %d\n", min);
	
	return 0;
}
