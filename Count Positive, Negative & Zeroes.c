//Count Positive, Negative Numbers & Zeroes

#include <stdio.h>

void countPosNegZero(int arr[], int size, int *pos, int *neg, int *zero){
	int i;
	
	*pos = 0;
	*neg = 0;
	*zero = 0;
	
	for(i=0; i<size; i++){
		if(arr[i]>0){
			(*pos)++;
		}
		else if(arr[i]<0){
			(*neg)++;
		}
		else{
			(*zero)++;
		}
	}
}

int main(){
	int i,n[5];
	int posCount, negCount, zeroCount;
	
	for(i=0; i<5; i++){
		printf("Enter elements %d\n",i+1);
		scanf("%d",&n[i]);
	}
	
	countPosNegZero(n,5, &posCount, &negCount, &zeroCount);
	
	printf("Total positive num = %d\n",posCount);
	printf("Total negitive num = %d\n",negCount);
	printf("Total zeroes = %d\n",zeroCount);
	
	return 0;
	
}
