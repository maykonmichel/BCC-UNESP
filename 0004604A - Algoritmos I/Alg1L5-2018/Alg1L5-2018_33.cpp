#include <stdio.h>

main() {
	float s = 0;
	
	for(int a = 0; a <= 37; a++) s+=(float)((37-a)*((37-a)+1))/(a+1);
	printf("%.2f", s);
}
