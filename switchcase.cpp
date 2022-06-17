#include <stdio.h>

int main(){
	
	float num1,num2, result;
	int op;
	
	printf("Type the first number: \n");
	scanf("%f",&num1);
	printf("Type the second number: \n");
	scanf("%f",&num2);
	printf("Select Operation: \n 1-Sum \n 2-Subtract \n 3-Multiply \n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			result= num1+num2;
			printf("The sum of %.1f and %.f is %.1f",num1,num2,result);
			break;
		case 2:
			result= num1-num2;
			printf("The subtract of %.1f and %.1f is %.3f",num1,num2,result);
			break;
		case 3:
			result= num1*num2;
			printf("The multiply of %.1f and %.1f is %.3f",num1,num2,result);
			break;
		default:
			printf("ERROR - SELECT OTHER NUMBER");
	}
	return(0);
}