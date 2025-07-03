//Passing Arrays to Functions - Finding Maximum & Minimum

int findMax(int arr[], int size){
	int max = arr[0];
	int i;
	
	for(i = 1; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int findMin(int arr[], int size){
	int min = arr[0];
	int i;
	
	for(i = 1; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;	
}

int main(){
	int num[5];
	int i;
	
	printf("Enter 5 integers:\n");
	
	for(i=0; i< 5; i++){
		printf("Enter element %d = ",i+1);
		scanf("%d",&num[i]);
	}
	
	int max = findMax(num, 5);
	int min = findMin(num, 5);
	
	printf("The Maximum Number is = %d\n",max);
	printf("The Minimum Number is = %d\n",min);
	
	return 0;
	
}
