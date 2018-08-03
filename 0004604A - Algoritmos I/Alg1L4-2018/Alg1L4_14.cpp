#include<stdio.h>

main() {
	int a;
	
	scanf("%d", &a);
	
	switch(a) {
		case 1:
			printf("Alimento nao-perecivel");
			break;
		case 2:
		case 3:
		case 4:
			printf("Higiene pessoal");
			break;
		case 5:
		case 6:
			printf("Alimento perecivel");
			break;
		default:
			if(a>=8 && a<=15) printf("Limpeza e utensilios domesticos");
			else printf("Codigo invalido");
	}
}
