#include <stdio.h>
#include <math.h>

int main()
{
	int n1;
	float raiz;
	
	n1 = 8;
	
	if(n1% 2 == 0){
		raiz = sqrt(n1);
		printf("\n o numero %d e par \n Sua raiz e %.1f", n1,raiz);
	}
	
	return(0);
}