#include<stdio.h>

main() {
	int n, m=0, s, o, c, i, p;
	
	printf("Digite o numero de habitantes: ");
	scanf("%d", &n);
	for(int k=1; k<=n; k++) {
		printf("Habitante numero %d:\n", k);
		
		while(scanf("%d", &s), s>2 || s<1) printf("Sexo(1-Masculino, 2-Feminino): ");
		while(scanf("%d", &o), o>3 || o<1) printf("Cor dos olhos(1-Azuis, 2-Verdes, 3-Castanhos): ");
		while(scanf("%d", &c), c>3 || c<1) printf("Cor dos Cabelos(1-Louros, 2-Castanhos, 3-Pretos): ");
		
		printf("Idade: ");
		scanf("%d",&i);
		if(i > m) m = i;
		if(i>=18  && i<=35 && s==2 && o==2 && c==1) p++;
	}
	printf("\n\nMaior idade dos habitantes: %d",m);
	printf("\nPercentagem do filtro: %.2f%%", 100.0*p/n);

}
