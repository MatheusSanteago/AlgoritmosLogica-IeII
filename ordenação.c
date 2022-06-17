#include <stdio.h>

int main(){
	int vetor[10] = {9,6,3,5,4,7,8,1,10,2};
	int i,j,troca;
		
	for(i= 0;i< 9;i++){
		for(j= i+1; j< 10;j++){
			if(vetor[i]> vetor[j]){
				troca = vetor[i];
				vetor[i]= vetor[j];
				vetor[j]= troca;
			}
		}
	}
	
	for(i=0;i< 10;i++){
		printf("..%d",vetor[i]);
	}
	return(0);
}