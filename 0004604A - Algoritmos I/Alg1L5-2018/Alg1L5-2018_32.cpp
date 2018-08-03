#include<stdio.h>

int main() {
	float a=1000, soma=0;
	
	for(int i=1; i<=20;i++){
		if(i%2==0)
			soma-=a/i;
		else
			soma+=a/i;
		a-=3;	
	}
	printf("Resultado: %.2f",soma);
}
