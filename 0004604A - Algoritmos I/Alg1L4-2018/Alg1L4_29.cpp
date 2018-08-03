#include<stdio.h>

main() {
	int e, f, h, p;
	
	scanf("%d %d", &e, &f);
	
	h = e - 2.0/3*f;
	
	if(h >=1200) {
		if(h < 1800) p=550;
		else if(h < 2400) p=600;
		else  p=800;
	}
	else {
		if(h>600) p=400;
		else  p=350;
	}
}
