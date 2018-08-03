#include<stdio.h>
#include<math.h>

main() {
	int a;
	
	scanf("%d", &a);
	
	a = abs(a);
	
	if(a<=90) printf("1");
	else if(a<=180) printf("2");
	else if(a<=270) printf("3");
	else printf("4");
}
