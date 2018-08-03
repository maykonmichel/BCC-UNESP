#include<stdio.h>

main() {
	float s;
	
	scanf("%f", &s);
	
	printf("%.2f", s>1350 ? s*1.1225 : s*1.255);
}
