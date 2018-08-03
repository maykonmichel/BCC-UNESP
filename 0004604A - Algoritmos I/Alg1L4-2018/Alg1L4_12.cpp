#include<stdio.h>
#include<math.h>

main(){
	int s;
	float p, h, i;
	
	scanf("%f %f %d",&p, &h, &s);
	
	i = s ? 72.7*h-58 :	62.1*h-44.7;
	
	if(p == i)	printf("Peso ideal");
	else if(p > i)	printf("Acima do peso");
	else printf("Abaixo do peso");
}
