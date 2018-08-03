#include <stdio.h>

main() {
	int x, y, z;
	float m;
	char c;
	
	scanf("%d %d %d", &x, &y, &z);
	
	m = (x * 3 + y * 2 + z * 5)/10;
	
	if(m<5) c = 'E';
	else if(m<6) c = 'D';
	else if(m<7) c = 'C';
	else if(m<8.5) c = 'B';
	else c = 'A';
	
	printf("%.2f %c", m, c);
}
