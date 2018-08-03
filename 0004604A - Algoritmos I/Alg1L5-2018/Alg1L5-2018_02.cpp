#include<stdio.h>

int main() {
	int i, a=0;
	float w, h, m1=0, m2=0, m3=0, m4=0, m5=0, mh=0, p=0;
	
	for(int k=0; k<55; k++) {
		if(k==0 || k==11 || k==22 || k==33 || k==44) printf("\n\n\t\tTime %d\n", k/11+1);
		printf("\nDigite, nesta ordem, a idade, o peso e a altura do jogador: ");
		scanf("%d %f %f", &i, &w, &h);
		if(i<18) a++;
		if(w>80) p++;
		switch(k/11) {
			case 0:
				m1+=i;
				break;
			case 1:
				m2+=i;
				break;
			case 2:
				m3+=i;
				break;
			case 3:
				m4+=i;
				break;
			default:
				m5+=i;
		}	
		mh+=h;
	}
	
	printf("\n\t\tResultados\n");
	printf("\nQuantidade de jogadores com menos de 18 anos: %d",a);
	printf("\nMedia da idade dos jogadores do time 1: %.2f",m1/11);
	printf("\nMedia da idade dos jogadores do time 2: %.2f",m2/11);
	printf("\nMedia da idade dos jogadores do time 3: %.2f",m3/11);
	printf("\nMedia da idade dos jogadores do time 4: %.2f",m4/11);
	printf("\nMedia da idade dos jogadores do time 5: %.2f",m5/11);
	printf("\nMedia da altura de todos os jogadores: %.2f",mh/55);
	printf("\nPorcentagem de jogadores com mais de 80kg: %.2f",p*100/55);
}
