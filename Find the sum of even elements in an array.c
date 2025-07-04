int sumEven(int arr[], int size){
	int sum = 0;
	int i;
	
	for(i=0; i < size; i++){
		if(arr[i] % 2 == 0){
			sum += arr[i];
		}
	}
	return sum;
}

int main(){
	
	int arr[5], i, result;
	
	printf("Enter 5 numbers\n");
	for(i = 0; i < 5; i++){
		printf("Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	result = sumEven(arr, 5);
	
	printf("The sum of even numbers in the array is: %d\n", result);

    return 0;
}
