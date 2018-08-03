#include<stdio.h>
#include<math.h>

main() {
	float  s, t, e, d, b, i;
	
	scanf("%f %f %f %f", &s, &t, &e, &d);
	
	b = s/220.0*t + s/5.0*e + d*32+s/220.0*t*0.5*e;
	
	printf("%.2f",b);
	if(b < 900) printf("Insento do imposto de renda\n");
	else if(b <= 1400) printf("%.2f", 0.1*b);
	else printf("%.2f", 0.2*b);
}
