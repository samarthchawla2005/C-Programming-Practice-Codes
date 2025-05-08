//Print only even elements from an array of 10 integers.

#include<stdio.h>

int main()
{
	int i, numbers[10];
	
	printf("Enter 10 integers:\n");
	for(i=0; i<10; i++){
		scanf("%d", &numbers[i]);
	}
	
	printf("Even numbers from the Array are:\n");
	for(i=0; i<10; i++)
	{
		if(numbers[i] % 2 == 0)
		{
			printf("%d ", numbers[i]);
		}
	}
	return 0;
}
