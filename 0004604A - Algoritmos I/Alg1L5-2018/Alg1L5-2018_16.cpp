#include <stdio.h>

main() {	
	int h, f, g, y;
	
	for(int x=1; x<=10; x++){
		h = (x*x)-16;
		
		if(h>=0) f=h;
		else f=1;
		if(f=0) g=x*x+16;
		else g=0;
		
		y = f+g;
		printf("%d", y);
	}
}
