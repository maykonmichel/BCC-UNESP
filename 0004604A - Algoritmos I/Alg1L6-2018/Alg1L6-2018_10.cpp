#include <stdio.h>
#include <math.h>

float f(int x) {
	float f=x;
	
	while(--x) f *= x;
	
	return f;
}

main() {
	
	int x, t;
	float c = 1.0;
	
	scanf("%d %d", &x, &t);
	
	for(int k=1; k<=t; k++) c += (k%2 ? -1 : 1) * pow(x, k*2)/f(k*2);
	
	printf("%f\n%f", c, cos(x));
	
}
