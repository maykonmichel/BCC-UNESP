#include <stdio.h>

main() {
	
	int a;
	float s = 1250;
	
	scanf("%d", &a);
	
	if(a > 2000) s *= 1+(0.025*(1 << a-2001));
	
	printf("%.2f", s);
	
}
