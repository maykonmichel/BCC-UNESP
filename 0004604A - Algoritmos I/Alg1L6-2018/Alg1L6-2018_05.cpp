#include <stdio.h>

main() {
	
	int a, b, q=0, r=0;
	
	scanf("%d %d", &a, &b);
	
	if(!b) printf("b=0");
	
	while(a >= b) {
		a -= b;
		q++;
	}
	
	printf("%d %d", q, a);
	
}
