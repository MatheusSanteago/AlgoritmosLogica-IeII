#include <stdio.h>
#include <math.h>

int main(){
	
	int n1,n2,n3,n4;
	float media;
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	
	media = (n1 + n2 + n3 + n4) / 4; 
	printf("A media e %.2f", media);
	
	return(0);
}