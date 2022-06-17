#include <stdio.h>

int main(){
	int vector[10] = {9,6,3,5,4,7,8,1,10,2};
	int i,j,troca;
		
	for(i= 0;i< 9;i++){
		for(j= i+1; j< 10;j++){
			if(vector[i]> vector[j]){
				troca = vector[i];
				vector[i]= vector[j];
				vector[j]= troca;
			}
		}
	}
	
	for(i=0;i< 10;i++){
		printf("..%d",vector[i]);
	}
}