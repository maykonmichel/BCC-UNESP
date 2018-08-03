#include <stdio.h>

main() {
	int n;
	while(scanf("%d", &n) && n<0)
	for(int a = 0; a<=n; a++)
	{
		printf("\n");
		for(int b = 1; b <= n-a; b++) printf("%2d", b);
	}
}
