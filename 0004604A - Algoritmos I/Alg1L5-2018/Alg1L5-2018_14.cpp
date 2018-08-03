#include<stdio.h>

main() {
	int v,n=0,b=0,t=0,ven=0,soma;
	int c[] = {0,0,0,0};
	float in;
	
	printf("0 - Sair\t1,2,3,4 - Votos em candidatos\n5 - Voto nulo\t6-Voto em branco");
	
	while(scanf("%d", &v) && v) {
		while(v<0 || v>6) scanf("%d", &v);
		
		t++;
		
		if(v>0 && v<5) c[v-1]++;
		else if(v == 5) n++;
		else b++;
	}
	
	if(t) {
		printf("\n\nVotos para cada candidato:");
		for(int k=0; k<4;k++) printf("\nCandidato %d: %d", k+1, c[k]);
		printf("\nVotos nulos: %d", n);
		printf("\nVotos em branco: %d", b);
		in = n+b;
		printf("\nPercentual de votos nulos+brancos: %.2f", 100*in/t);
		
		for(int cont=1;cont<4;cont++) if(c[ven] < c[cont]) ven = cont;
		for(int cont=0;cont<4;cont++) if(ven != cont) soma += c[cont];
		
		if(c[ven]+b > soma) printf("\nO candidato %d venceu no primeiro turno", ven+1);
		else printf("\nA eleicao sera decidida no segundo turno, com o candidato %d na frente", ven+1);
	}
}
