#include <stdio.h>

main() {
	
	int i;
	
	scanf("%d", &i);
	
	if(i < 3) printf("Rec�m-nascido");
	else if(i < 12) printf("Crian�a");
	else if(i < 20) printf("Adolescente");
	else if(i < 56) printf("Adulto");
	else printf("Idoso");
	
}
