#include <stdio.h>
#include <math.h>

main() {
	float s=0;
	
	for(int k=0; k<30; k++) {
		k%2 ? s-=(float)1/pow(2*k+1, 3) : s+=(float)1/pow(2*k+1, 3);
	}
	
	printf("%f", cbrt(32*s));
}
