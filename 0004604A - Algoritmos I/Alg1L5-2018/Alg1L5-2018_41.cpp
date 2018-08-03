#include<stdio.h>

int main() {
	int n;
	float s = 0;
	
	scanf("%d", &n);
	for(int k=0; k<n; k++) s += (float)(k+1)/(n-k);
	printf("%.2f", s);
}
