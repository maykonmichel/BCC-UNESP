#include<stdio.h>

main() {
	float a, b, c, d, u, v, x, y;
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &u, &v);
	
	if((a*d)-(b*c)==0) printf("Nao e possivel dividir um numero por zero");
	else {
		x = (d/(a*d-b*c)*u)-(b/(a*d-b*c)*v);
		y = (-c/(a*d-b*c)*u)+(a/(a*d-b*c)*v);
		printf("%.2f\n%.2f", x, y);
	}
}

