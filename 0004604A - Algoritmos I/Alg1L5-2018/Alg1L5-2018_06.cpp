#include <stdio.h>

main() {
	int a=0, b=1, s=0;
	
	while(a<b) {
		scanf("%d %d", &a, &b);
		
		for(int i=a, s=0; i<=b; i++) s+=i;
		printf("%d", s);
	};
}
