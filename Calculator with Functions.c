//Create a calculator function for basic operations
//Make a function that takes two numbers and an *operator (+, -, , /) as input and returns the result based on the operator.


#include<stdio.h>

float calculator(float a, float b, char op){
	float result;
	
	switch(op){
		
	case '+':
		result = a+b;
		break;
	
	case '-':
		result = a-b;
		break;	
	
	case '*':
		result = a*b;
		break;
		
	case '/':
		 if(b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            break;
		
		default:
            printf("Invalid operator!\n");
            return 0;
	}
	return result;
}


int main(){
	float a,b,result;
	char op;
	
	printf("Enter First Number\n");
	scanf("%f",&a);
	
	printf("Enter Second Number\n");
	scanf("%f",&b);
	
	printf("Enter operator (+, -, *, /):");
	scanf(" %c", &op);
	
	result = calculator(a,b,op);
	
	printf("Operator read: '%c'\n", op);
	printf("Result = %0.2f\n", result);
	
	return 0;
}
