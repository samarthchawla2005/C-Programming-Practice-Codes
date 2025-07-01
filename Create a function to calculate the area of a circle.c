//Mini Exercise 6: Create a function to calculate the area of a circle

#include<stdio.h>

float arofcircle(float r){
	float pi = 3.14;
	return pi*r*r;
}

int main(){
	float r,area;
	
	printf("Enter a value of radius\n");
	scanf("%f",&r);
	
	area = arofcircle(r);
	
	printf("The Area of circle = %0.2f",area);
	
	return 0;
}
