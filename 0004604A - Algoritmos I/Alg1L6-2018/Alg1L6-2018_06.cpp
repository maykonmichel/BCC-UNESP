#include<stdio.h>

main() {
	
	int m, n, maxX, maxY, max=0;
	
	scanf("%d %d", &m, &n);
	
	for(int x=0; x<=m; x++) {
		for(int y=0; y<=n; y++) {
			if(x*y-x*x+y >= max){
				max = x*y-x*x+y;
				maxX = x;
				maxY = y;
			}
			
		}
	}
	
	printf("X: %d\nY: %d\nMaximo: %d", maxX, maxY, max);	
}

