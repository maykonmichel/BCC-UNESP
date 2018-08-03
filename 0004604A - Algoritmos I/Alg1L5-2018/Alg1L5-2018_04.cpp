#include<stdio.h>

main() {
	int a, b, c=0;
	float m=0;
	
	scanf("%d %d", &a, &b);
	
	if(a == b) return 0;
	else if(a < b) for(; a<=b; a++, c++) m += a;
	else for(; b<=a; b++, c++) m += b;
	printf("%.2f", m/c);
}
