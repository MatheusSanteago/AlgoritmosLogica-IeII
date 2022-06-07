#include <stdio.h>
#include <math.h>	

int main(){
	
	int raio;
	float perimetro,area;
	
	scanf("%d",&raio);
	area = M_PI * pow(raio,2);
	
	printf("\n A area e: %.2f",area);
	
	perimetro = pow(M_PI,2) * pow(raio,2);
	printf("\n O perimetro e %.2f",perimetro);
	
	return(0);
}