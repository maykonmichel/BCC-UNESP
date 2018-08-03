#include <stdio.h>

main() {
	
	float p;
	int c;
	
	scanf("%f %d", &p, &c);
	
	switch(c) {
		case 1:
			p *= 0.9;
			break;
		case 2:
			p *= 0.95;
			break;
		case 4:
			p *= 1.1;
	}
	
	printf("%.2f", p);
	
}
