#include <stdio.h>

int main(){
	int number;
		
	printf("Digite um numero: ");
	scanf("%d",&number);
	
	if(number >= 0){
		printf("Número Positivo");
	}else{
		printf("Número Negativo");
	}
	return(0);
}