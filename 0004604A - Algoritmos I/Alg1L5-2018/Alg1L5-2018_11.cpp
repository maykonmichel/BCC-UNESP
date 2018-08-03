#include <stdio.h>

main() {	
	for(float i=0.5; i<=20; i+=0.5) {
		printf("Volume com raio = %.1f : %.2f\n", i, ((4/3)*3.14*i*i*i));
	}
}
