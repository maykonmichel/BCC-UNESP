#include<stdio.h>

int main() {
	int sexo, res, nsim=0;
	float male=0, porc=0;
	
	printf("\t\tMenu\n\nDigite o Seu Genero:\n1 - Feminino\t2 - Masculino\n\nGostou do Novo Produto?\n1 - Sim\t2 - Nao");
	for(int i = 1; i<=15; i++) {
		printf("\nPessoa %d: ",i);
		scanf("%d %d",&sexo, &res);
		if(sexo==2) {
			male++;
			if(res==2) porc++;
		}
		if(res==1) nsim++;
	}
	printf("\n\nNumero de pessoas que responderam sim: %d\nPorcentagem de homens que responderam nao: %.2f%%",nsim,porc*100/male);
}
