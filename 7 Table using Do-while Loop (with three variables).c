// 7 Table using Do-while Loop (with three variables)

#include<stdio.h>

int main()
{
	int i=7, j=1, k;
	
	do{
		k = i*j;
		printf("%d*%d = %d \n",i,j,k);
		j++;
	}
	while(j<=10);
	
	return 0;
}
