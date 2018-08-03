#include <stdio.h>
#include <algorithm>

using namespace std;

main() {
	
	int n[3];
	
	for(int k=0; k<3; k++) scanf("%d", &n[k]);
	
	sort(n, n+3);
	
	for(int k=0; k<3; k++) printf("%3d", n[k]);
	
}
