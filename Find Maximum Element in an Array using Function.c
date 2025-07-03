//Find Maximum Element in an Array using Function

#include<stdio.h>

int findMax(int arr[], int size){
	int max = arr[0];
	int i;
	
	for(i=1; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int num[5], i, max;
	
	printf("Enter a number:\n");
	
	for(i=0; i < 5; i++){
		printf("Element %d:",i+1);
		scanf("%d", &num[i]);
	}
	max = findMax(num, 5);
	printf("The maximum number is: %d\n", max);
	
	return 0;
}
