#include <stdio.h>

main() {
	float x, y, z, w, m;
	
	scanf("%f %f %f %f", &x, &y, &z, &w);
	
	m = (x+y+z+w)/4;
	
	printf("%d", m);
	
	if(m < 5) printf("Reprovado");
	else if(m < 7) printf("Exame");
	else printf("Aprovado");
}
