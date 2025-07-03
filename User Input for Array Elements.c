//User Input for Array Elements

#include<stdio.h>

int sumArray(int arr[], int size){
	int sum = 0;
	int i;
	
	for(i=0; i<=5; i++){
		sum += arr[i];
	}
	
	return sum;
}

int main(){
	int i;
	int arrSum[5];
	int result;
	
	printf("Enter 5 numbers:\n");
	
	for(i=0; i<=5; i++){
		printf("Enter element %d:", i+1);
		scanf("%d",&arrSum[i]);
	}
	
	result = sumArray(arrSum, 5);
	
	printf("The sum of the 5 numbers given in this array is = %d", result);
	
	return 0;
}
