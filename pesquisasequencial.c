#include <stdio.h>

int main(){
	int i,acha, busca;
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	
	i= 0;
	acha = 0;
	printf("Digite o numero de busca");
	scanf("%d",&busca);
	
	while((acha == 0)&&(i<10)){
		if(vetor[i]== busca){
			acha = 1;
		}else {
			i++;
		}
	}
	if(acha == 1){
		printf("O elemento foi encontrado %d no index[%d] do vetor", vetor[i],i);
	}else{
		printf("Elemento Inexistente \n Digite novamente");
		scanf("%d",&busca);
	}
	return(0);	
}