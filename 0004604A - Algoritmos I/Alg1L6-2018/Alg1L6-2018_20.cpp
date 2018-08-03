#include <stdio.h>

main() {
	
	float p = 5;
	
	for(int k=0; k<=10; k++, p+=0.5) {
		printf("%.2f\t%.2f\n", p, 120*p-200);
	}
	
}
