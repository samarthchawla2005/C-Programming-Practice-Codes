//Count Odd Numbers in an Array

#include<stdio.h>

int countOdd(int arr[], int size){
	int i, count = 0;
	
	for(i = 0; i < size; i++){
		if(arr[i] % 2 != 0){
			count++;
		}
	}
	return count;	
}

int main(){
	int num[5], i, oddCount;
	
	printf("Enter 5 integers:\n");
	
	for(i=0; i < 5; i++){
		printf("Elements %d: ",i+1);
		scanf("%d", &num[i]);
	}
	
	oddCount = countOdd(num, 5);
	
	printf("Total odd numbers = %d\n", oddCount);
	
	return 0;
}
