//Count Positive and Negative Numbers

#include <stdio.h>

void countPosNeg(int arr[], int size, int *pos, int *neg){
	int i;
	*pos = 0;
	*neg = 0;
	
	for(i=0; i<size; i++){
		if(arr[i]>0){
			(*pos)++;
		}
		else{
			(*neg)++;
		}
	}
}

int main(){
	int n[5], i;
	int posCount, negCount;
		
	for(i=0; i<5; i++){
		printf("Enter element %d = ",i+1);
		scanf("%d", &n[i]);
	}
	
	countPosNeg(n, 5, &posCount, &negCount);
	
	printf("Total positive numbers are %d\n",posCount);
	printf("Total negative numbers are %d\n",negCount);
	
	return 0;
}
