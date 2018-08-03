#include <stdio.h>

main() {
	
	int d, m;
	
	scanf("%d %d", &d, &m);
	
	d += (m-1)*30;
	
	if(d<=20 || d>11*30+21) printf("Capricórnio");
	else if(d <= 30+19) printf("Aquário");
	else if(d <= 2*30+20) printf("Peixes");
	else if(d <= 3*30+20) printf("Áries");
	else if(d <= 4*30+20) printf("Touro");
	else if(d <= 5*30+20) printf("Gêmeos");
	else if(d <= 6*30+21) printf("Câncer");
	else if(d <= 7*30+22) printf("Leão");
	else if(d <= 8*30+22) printf("Virgem");
	else if(d <= 9*30+22) printf("Libra");
	else if(d <= 10*30+21) printf("Escorpião");
	else printf("Sagitário");
	
}
