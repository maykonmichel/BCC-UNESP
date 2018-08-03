#include<stdio.h>

main() {
	int n, maior, menor;
	bool flag = false;
	
	while(scanf("%d", &n) && n) {
		while(n<0) scanf("%d", &n);
		if(!flag){
			maior = n;
			menor = n;
			flag = true;
		}
		if(n > maior){
			maior = n;
		}
		if(n < menor){
			menor = n;
		}
	}
	
	if(flag) printf("%d %d", maior, menor);
}
