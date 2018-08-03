#include <stdio.h>

int fat(int n) {
	int f = 1;
	for(int a = 0; a<n; a++)
	f*=n-a;
	return f;	
}

main() {
	float s = 0, d=1;
	
	for(int a = 1; a<21; a++) {
		if(a%2 == 0)
		s -= (float)fat(a)/d;
		else
		s += (float)fat(a)/d;
		d = (d*2)+1;
	}
	
	printf("%.2f", s);
}
