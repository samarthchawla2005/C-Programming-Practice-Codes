//Array Exercise

//Takes input of 5 integers from the user & calculates and prints the sum and average of those numbers.

#include<stdio.h>

int main()
{
	int i;
	int integer[5];
	int s = 0;
	float a;
	
	for(i=0; i<5; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&integer[i]);
		s += integer[i]; //Adding each number to sum
	}
	
	a = s/5.0;
	
	printf("The sum for given numbers is %d & theire average is %.2f ", s, a);
	
	return 0;
}
