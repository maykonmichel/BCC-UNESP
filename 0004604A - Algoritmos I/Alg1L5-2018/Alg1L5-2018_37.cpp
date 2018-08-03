#include<stdio.h>

int main() {
	float a=100, soma=100, fat=1;
	
	for(int i=1; i<20;i++) {
		a--;
		fat*=i;
		soma+=a/fat;	
	}
	printf("Resultado: %.2f",soma);
}
