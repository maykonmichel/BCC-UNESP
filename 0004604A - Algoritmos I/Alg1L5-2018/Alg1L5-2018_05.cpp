#include <stdio.h>

main() {
	
	int d, m;
	
	scanf("%d %d", &d, &m);
	
	d += (m-1)*30;
	
	if(d<=20 || d>11*30+21) printf("Capric�rnio");
	else if(d <= 30+19) printf("Aqu�rio");
	else if(d <= 2*30+20) printf("Peixes");
	else if(d <= 3*30+20) printf("�ries");
	else if(d <= 4*30+20) printf("Touro");
	else if(d <= 5*30+20) printf("G�meos");
	else if(d <= 6*30+21) printf("C�ncer");
	else if(d <= 7*30+22) printf("Le�o");
	else if(d <= 8*30+22) printf("Virgem");
	else if(d <= 9*30+22) printf("Libra");
	else if(d <= 10*30+21) printf("Escorpi�o");
	else printf("Sagit�rio");
	
}
