#include<stdio.h>
#include<math.h>

main() {
	int o;
	float a, b;
	
	scanf("%d", &o);
	
	if(o == 1) {
		scanf("%f %f", &a, &b);
		printf("%.2f", a+b);
	}
	else if(o == 2) {
		scanf("%f %f", &a, &b);
		printf("%.2f", a*b);
	}
	else if(o == 3) {
		scanf("%f", &a);
		printf("%.2f", sqrt(a));
	}
}
