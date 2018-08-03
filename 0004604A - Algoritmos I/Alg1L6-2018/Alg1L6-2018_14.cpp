#include <stdio.h>
#define MIN 954.0

main () {  
	int i=1, d;
	long long int c;
	float r, e, m;
	
	printf("Valor do salario minimo: %.2f",MIN);
	while(i) {
		printf("\nDigite o CPF do contribuinte: ");
	  	scanf("%lld", &c);
	  	
	    printf ("Digite o numero de dependentes do contribuinte: ");
	    scanf ("%d", &d);
	    
	    printf ("Digite o valor da renda mensal do contribuinte: ");
	    scanf ("%f", &r);
	    
	    e = d*MIN*0.05;
	    
	    if (r <= 2*MIN) printf ("\nO contribuinte de CPF: %lld, eh isento", c);
	    else if (r>2*MIN && r<=3*MIN) m = r * 0.05 - e;
	    else if (r>3*MIN && r<=5*MIN) m = r * 0.1 - e;
	    else if (r>5*MIN && r<=7*MIN) m = r * 0.15 - e;
	    else m = r * 0.2 - e;
	    
	    printf("\nO contribuinte de CPF: %lld, deve pagar %.2f Reais\n\n", c, m);
	    
	    printf("Deseja sair?(0 para sair, outro numero pra continuar) ");
	    scanf("%d", &i);
	}
}

