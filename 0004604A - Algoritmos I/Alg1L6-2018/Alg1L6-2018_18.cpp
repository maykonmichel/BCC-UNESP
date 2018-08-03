#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

main()
{
	int n;
	vector<int> v;
	
	while(scanf("%d", &n), n) if(!(n%2)) v.push_back(n);
	
	printf("%.2f", accumulate( v.begin(), v.end(), 0.0)/v.size());
	
}
