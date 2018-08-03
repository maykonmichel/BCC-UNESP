#include <stdio.h>

main()
{	
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	for(int i=a; i<=b; i++) s+=i;
	printf("a + b = %d", s);
}
