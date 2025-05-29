#include<stdio.h>

void even_print(){
	int i;
	
	for(i=2; i<=20; i+=2)
	{
		printf("%d\n",i);
	}
}

int main()
{
	even_print();
	
	return 0;
}
