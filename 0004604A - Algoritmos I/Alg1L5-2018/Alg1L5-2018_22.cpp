#include<stdio.h>

int main() {
	int soma=0,quant=0;
	for(int i = 3; i<=700; i+=6){
		soma+=i;
		quant++;
	}
	printf("Valor da Soma dos Numeros: %d\nQuantidade de Numeros Somados: %d",soma, quant);
}
