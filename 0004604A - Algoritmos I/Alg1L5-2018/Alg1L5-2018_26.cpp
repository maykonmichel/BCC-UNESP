#include <stdio.h>

main() {	
	int d=1, menor=2, maior=0, soma, i=0;
	
	while(scanf("%d", &d) && d) {
		if(d!=0){
			soma+=d;
			if(d<menor)
				menor=d;
			if(d>maior)
				maior=d;
			i++;
		}
	}
	
	printf("\n\nMedia: %d", (soma/i));
	printf("\nRazao: %d", (maior-menor));
}
