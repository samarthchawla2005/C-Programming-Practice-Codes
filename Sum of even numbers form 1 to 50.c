//Sum of even numbers from 1 to 50

#include<stdio.h>

int main()
{
	int i=1,k=0;
	
	while(i<=50)
	{
		
		if(i%2==0)
		{
			k += i;	
		}
		i++;
	}
	
	printf("Sum of the even numbers from 1 to 50 number is = %d \n", k);
	
	return 0;
}
