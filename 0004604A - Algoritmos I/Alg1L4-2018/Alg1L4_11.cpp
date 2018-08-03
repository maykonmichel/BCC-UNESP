#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

main() {
	int l[3];
	
	for(int k=0; k<3; k++) scanf("%d", &l[k]);
	
	sort(l, l+3);
	
	if(l[0]+l[1] < l[2]) {
		if(l[0]==l[2])
			printf("Triangulo equilatero");
		else if(l[0] == l[1] || l[1]==l[2])
			printf("Triangulo isosceles");
		else 
			printf("Triangulo escaleno");
	}
	else
		printf("Impossivel formar um triangulo");
}
