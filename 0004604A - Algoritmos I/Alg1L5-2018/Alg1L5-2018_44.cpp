#include<stdio.h>

main() {
	float sum=0;
	
	printf("Direita pra esquerda: ");
	for(int k=1000; k>=1; k--){
		if(k%2) sum+= 1.0/k;
		else sum-= 1.0/k;
	}
	printf("%.4f", sum);
	
	sum=0;
	printf("\nEsquerda pra direita: ");
	for(int k=1; k<=1000; k++){
		if(k%2) sum+= 1.0/k;
		else sum-= 1.0/k;
	}
	printf("%.4f", sum);
	
	sum=0;
	printf("\nSeparada direita pra esquerda: ");
	for(int k=999; k>=1; k-=2) sum+= 1.0/k;
	for(int k=1000; k>=2; k-=2) sum-= 1.0/k; 
	printf("%.4f",sum);
	
	sum=0;
	printf("\nSeparada esquerda pra direita: ");
	for(int k=1; k<=999; k+=2) sum+= 1.0/k; 
	for(int k=2; k<=1000; k+=2) sum-= 1.0/k;
	printf("%.4f",sum);
}
