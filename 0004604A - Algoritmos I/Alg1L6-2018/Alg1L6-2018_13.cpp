#include <stdio.h>

main() {
	int n, s = 0, q = 0, max = 0, min = 0;
	float mi, pp = 0;
	
	while(scanf("%d", &n), n != 100000) {
		s+=n;
		q++;
		
		if(max < n) max = n;
		else if(!max && n) max = n;
		
		if(min > n) min = n;
		else if(!min && n) min = n;
		
		if(!(n%2)) pp++;
		else mi+=n;
	}
	
	printf("Soma: %d\n", s);
	printf("Quantidade: %d\n", q);
	printf("Media: %.2f\n", s/q);
	printf("Maior: %d\n", max);
	printf("Menor: %d\n", min);
	printf("Media impares: %.2f\n", mi/(q - pp));
	printf("Porcentagem pares: %.2f", (100.0*pp)/q);
}
