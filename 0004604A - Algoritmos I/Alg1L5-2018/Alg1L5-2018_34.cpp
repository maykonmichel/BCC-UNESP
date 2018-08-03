#include<stdio.h>

main() {
	int s=480;
	float a=0;
	
	for(int k=10;k<25;k++){
		if(k%2) a-=(float)s/k;
		else a+=(float)s/k;
		s-=5;
	}
	
	printf("%.2f", a);
}
