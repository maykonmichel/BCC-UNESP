#include<stdio.h>
#include<math.h>

double f(int n) {
    if (n == 1) return 1;
    else return n * f(n - 1);
}

main() {
	int x;
	
	scanf("%d", &x);
	double s = x;
	
	for(int k=1; k<20; k++){
		if(k%2) s -= pow(x, k*2)/f(k*2+1);
		else s += pow(x, k*2)/f(k*2+1);
	}
	printf("%.2f", s);
}
