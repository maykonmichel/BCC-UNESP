#include <stdio.h>

main() {
	double s=1;
	
	for(int k=2; k<=10000; k++) k%2 ? s+=1.0/k : s-=1.0/k;
	
	printf("%f", s);
}
