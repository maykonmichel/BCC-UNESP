#include <stdio.h>

main() {
	
	float s=1;
	
	for(int k=2; k<=50; k++) s += (float)(2*k-1)/k;
	
	printf("%f", s);
	
}
