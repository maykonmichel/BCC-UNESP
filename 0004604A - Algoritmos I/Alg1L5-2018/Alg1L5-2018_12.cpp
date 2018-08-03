#include<stdio.h>

int main() {
	int alt, i, j=1;
	
	scanf("%d", &alt);
	
	for(int k=0; k<alt; k++){
		i=k+1;
		while(i<alt){
			printf(" ");
			i++;
		}
		i=0;
		while(i<j){
			printf("*");
			i++;
		}
		printf("\n");
		j+=2;
	}
}
