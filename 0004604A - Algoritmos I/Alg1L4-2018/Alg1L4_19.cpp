#include<stdio.h>

main() {
	int c, p=0;
	
	scanf("%d", &c);
	
	switch (c) {
		case 1:
			printf("Escriturario");
			p=60;
		break;
		case 2:
			printf("Secretario");
			p=40;
		break;
		case 3:
			printf("Caixa");
			p=25;
		break;
		case 4:
			printf("Gerente");
			p=5;
		break;
		case 5:
			printf("Diretor");
		break;
		
		default:
			printf("Codigo invalido");
		break;
	}
	printf("\n%d", p);
}
