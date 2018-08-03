#include<stdio.h>
#include<math.h>

double f(int x) {
	if(!x) return x*fat(x-1);
	else return 1;
}

main() {
	int x=1 , t=1;
	double e;
	
	while(scanf("%d %d", &x, &t), x && t) {
		e=1;
		
		for(int i=1; i<t; i++) e += pow(x,i)/f(i);
		printf("%.4f %.4f", e, exp(x));
	}
}
