#include <stdio.h>

main()
{	
	int a, b, si = 0, mp = 1;
	
	scanf("%d %d", &a, &b);
	if(a>b)
		for(int i = b; i<=a; i++)
		{
			if(i%2 == 1)
			si+=i; 
			else
			mp*=i;
		}
	else
		for(int i = a; i<=b; i++)
		{
			if(i%2 == 1)
			si+=i; 
			else
			mp*=i;
		}
	printf("%d %d", si, mp);
}
