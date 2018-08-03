#include <stdio.h>

main() {
	float s = 0;
	int n = 500;
	for(int a = 0; a<10; a++)
	{
		if(a%2 == 0)
		s+=(float)2/n;
		else
		s-=(float)5/n;
		n -= 50;
	}
	
	printf("%.2f", s);
}
