#include <stdio.h>
#include <algorithm>

using namespace std;

main() {
	
	int c, v, a, t=0, s=0, i=0;
	pair<int, int> m, M;
	
	for(int k=0; k<5; k++) {
		scanf("%d %d %d", &c, &v, &a);
		if(!k) m = M = make_pair(a, c);
		else {
			m = min(m, make_pair(a, c));
			M = max(M, make_pair(a, c));
		}
		t += v;
		if(v < 2000) {
			s += a;
			i++;
		}
	}
	
	printf("%d %d\t%d %d\n%f\n%f", m.first, m.second, M.first, M.second, t/5.0, s*1.0/i);
}
