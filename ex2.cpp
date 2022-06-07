#include <stdio.h>
#include <math.h>

int main(){
	
	int num;
	float raiz,quad;
	
	printf("Digite um numero inteiro");
	scanf("%d",&num);
	quad = pow(num,2);
	raiz = sqrt(num);
	
	printf("O quadrado de %d é %.2f \n",num,quad);
	printf("\n A raiz de %d é %.2f",num,raiz);
	
	return(0);
}