#include <stdio.h>

main() {
	
	float p;
	int c;
	
	scanf("%f %d", &p, &c);
	
	if(c == 1) printf(".2f Sul", p);
	else if(c == 2) printf(".2f Norte", p);
	else if(c == 3) printf(".2f Leste", p);
	else if(c == 4) printf(".2f Oeste", p);
	else if(c < 7) printf(".2f Nordeste", p);
	else if(c < 10) printf(".2f Sudeste", p);
	else if(c < 21) printf(".2f Centro-oeste", p);
	else if(c < 31) printf(".2f Nordeste", p);
	else printf(".2f Importado", p);
	
} 
