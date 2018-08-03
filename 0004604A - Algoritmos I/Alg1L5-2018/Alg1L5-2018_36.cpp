#include <stdio.h>

main() {
	float soma=0.0000;	
	int baixo=31, b = 256;

	for(int encima=1; encima<=16384; encima*=(-2)){
		b-=baixo;
		soma += (encima/b);
		printf("+ (%d / %d) = %.4f\n", encima, b, soma);
		baixo-=2;
	}
}
