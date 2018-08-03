#include<stdio.h>

int main() {
	int x, y, r, i=1;
	
	scanf("%d %d", &x, &y);
	r = x;
	for(int k=1; k<y; k++) r*=x;
	printf("%d", r);
}
