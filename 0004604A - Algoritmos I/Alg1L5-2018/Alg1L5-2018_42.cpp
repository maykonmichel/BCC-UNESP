#include<stdio.h>

int main() {
	float a, soma=0;
	printf("Digite o Valor: ");
	scanf("%f",&a);
	for(int i=1; i<=20;i++){
		if(i%2==0) soma-=a/i;
		else soma+=a/i;	
	}
	printf("Resultado: %.2f",soma);
}
