#include <stdio.h>

main() {
	
	int n, v, s=0;
	
	scanf("%d", &n);
	
	for(int k=0; k<n; k++) {
		scanf("%d", &v);
		s += v;
	}
	
	printf("%d", s/n);
	
}
