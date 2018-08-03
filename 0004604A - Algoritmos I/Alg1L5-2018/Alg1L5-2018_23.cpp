#include <stdio.h>

main() {
	int n, b;
	scanf("%d %d", &n, &b);
	for(int a = 1; a <= b; a++) printf("%d x %d = %d\n", a, n, a*n);
}
