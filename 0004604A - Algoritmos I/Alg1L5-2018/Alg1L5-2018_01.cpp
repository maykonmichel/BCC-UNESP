#include <stdio.h>

main() {
	int n=0, f=1;
	
	scanf("%d", &n);
	
	for(int k=1; k<=n; k++) f*=k;
	printf("%d", f);
}
