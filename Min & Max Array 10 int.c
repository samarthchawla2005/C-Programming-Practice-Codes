//Find the maximum and minimum of an entire array 

#include<stdio.h>

int main()
{
	int i;
	int integer[10];
	
	for(i=0; i<10; i++)
	{
		printf("Enter 10 integers\n %d integer = ",i+1);
		scanf("%d",&integer[i]);
	}
	
	int Max = integer[0];
	int Min = integer[0];
	
	for(i=0; i<10; i++)
	{
		if(integer[i]>Max){
			Max = integer[i];
		}
		else
		if(integer[i]<Min)
		{
			Min = integer[i];
		}
	}
	
	printf("Even elements from the above array are:-");
	for(i=0; i<10; i++){
		if(integer[i] % 2 == 0)
		{
			printf("%d ",integer[i]);
		}
	}
	
	printf("\nMaximum Number is %d",Max);
	printf("\nMinimum Number is %d",Min);
	
	return 0;
}
