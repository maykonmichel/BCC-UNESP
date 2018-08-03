#include <stdio.h>

main() {
	
	int n, s;
	
	scanf("%d", &n);
	
	for(int k=1; k<=n*2; k+=2) s += k;
	
	printf("%d", s);
	
}
