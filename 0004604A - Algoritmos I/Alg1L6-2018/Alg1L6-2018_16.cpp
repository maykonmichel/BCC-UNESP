#include <stdio.h>

main() {	
	for(int d1=1; d1<=6; d1++) {
		for (int d2=1; d2<=6; d2++) {
			if(d1 + d2 == 7) printf("\n%d + %d = %d\n", d1, d2, d1+d2);
		}
	}
}
