//Exercício 11
#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
	if (n) 
		return n*fatorial(n-1);
	else return 1;
}

main(){	
	
	int termos;
	float seno1=0, seno2, x;
	
	do{
		printf("Digite X (sair -> x=0): ");
		scanf("%f", &x);
		if(x!=0){
			printf("Digite o numero de termos: ");
			scanf("%d", &termos);
			x=(x/180)*3.14;
			seno2 = sin(x);
			for(int t=1, i=1, y=1; t<=termos; i+=2, y*=(-1), t++){
				seno1+= y*(pow(x, i)/fatorial(i));
			}
			printf("Seno pela conta: %.2f\nSeno pela funcao: %.2f\n\n", seno1, seno2);
			seno1=0;
		}
	}while(x!=0);	
}
