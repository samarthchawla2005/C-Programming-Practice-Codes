//Create a calculator function for basic operations in a LOOP
//Make a function that takes two numbers and an *operator (+, -, , /) as input and returns the result based on the operator & it must run in a loop.


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
	char op, choice;
	
	do{
	
	printf("Enter First Number\n");
	scanf("%f",&a);
	
	printf("Enter Second Number\n");
	scanf("%f",&b);
	
	printf("Enter operator (+, -, *, /):");
	scanf(" %c", &op);
	
	result = calculator(a,b,op);
	
	if(op == '+' || op == "-" || op == "*" || (op = "/" && b!=0))
		printf("Result = %0.2f\n", result);
	
//	printf("Operator read: '%c'\n", op);

	while(1){
	printf("Do you want to continue ? (Y/N): ");
	scanf(" %c", &choice);	
	
	if(choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n' ){
		break;	
	 }
	  else{
        printf("? Invalid choice! Please enter Y or N only.\n");	 	
	 }
	}

	
	}
	while(choice == 'Y' || choice == 'y');
	
	
	
	
    printf("Calculator program ended.\n");
	
	return 0;
}
