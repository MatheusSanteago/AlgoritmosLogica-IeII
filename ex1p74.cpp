#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,maior,menor;
	
	n1=4;
	n2=1;
	n3=6;
	n4=7;
	n5=5;
	
	maior=0;
	menor=0;
	
	if(n1> n2){
		maior = n1;
		menor = n2;
	}else{
		maior = n2;
		menor = n1;
	}
	
	if(n3> maior){ 
		maior = n3;
		menor = menor;
	}else{
		if(n3 < menor){
		menor = n3;	
		}	
	}
	if(n4> maior){ 
		maior = n4;
		menor = menor;
	}else{
		if(n4 < menor){
		menor = n4;	
		}
	}
	if(n5> maior){ 
		maior = n4;
		menor = menor;
	}else{
		if(n5 < menor){
		menor = n5;	
		}
	}
	

	
	
	printf("O MAIOR E %d \n E MENOR %d", maior,menor);
	return(0);

}