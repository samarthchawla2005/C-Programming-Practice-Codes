//Find Maximum and Minimum from 5 Numbers

#include<stdio.h>

int main()
{
	int i;
	int integer[5];
	
	for(i=0; i<5; i++)
	{
	printf("Enter 5 integers\n %d integer = ",i+1);
	scanf("%d",&integer[i]);
	}
	
	int max = integer[0];
	int min = integer[0];
	
	for(i=1; i<5; i++)
	{
		if(integer[i]>max){
			max = integer[i];
		}
		else
		if(integer[i]<min){
			min = integer[i];
		}
	}
	
	printf("\nMaximum number = %d", max);
	printf("\nMinimum number = %d", min);
	
	return 0;
}
