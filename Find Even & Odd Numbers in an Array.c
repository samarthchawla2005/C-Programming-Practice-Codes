// Find Even & Odd Numbers in an Array

#include<stdio.h>

int main()
 {
	int i;
	int integer[10];
	
	for(i=0; i<=10; i++)
	{
			printf("Enter integer %d: ",i+1);
			scanf("%d",&integer[i]);
	}
	
	printf("\nEven Number:\n");
	for(i=0; i<10; i++)
	{
		if(integer[i]%2 == 0)
		{
			printf("%d ", integer[i]);
		}
	}
	
	printf("\n\nOdd Numbers:\n");
	for(i=0; i<10; i++)
	{
		if(integer[i]%2 != 0)
		{
			printf("%d ",integer[i]);
		}
	}
 
	return 0;		
}
