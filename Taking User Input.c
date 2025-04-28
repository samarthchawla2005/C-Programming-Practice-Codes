//Taking User Input.

#include<stdio.h>

int main()
{
	int age;
	char fav_ltr;
	
	printf("What is your age ?\n");
	scanf("%d",&age);
	
	getchar();
	
	printf("\n");
	
	printf("What is your favorite letter ?\n");
	scanf("%c",&fav_ltr);
	
	printf("\n");
	
	printf("Your age is %d and your favorite letter is %c.",age,fav_ltr);
	
	
	return 0;
}
