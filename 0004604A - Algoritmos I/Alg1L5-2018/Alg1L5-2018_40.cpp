#include <stdio.h>

main() {
	int n;
	float h=1;
	
	scanf("%d", &n);
	
	for(int k=2; k<=n; k++) h += 1.0/k;
	
	printf("%f", h);
}
