#include <stdio.h>

main() {	
	int soma=1;
	
	for(int i=2; i<=10; i++){
		soma-=i;
	}
	printf("Soma = %d", soma);
}
