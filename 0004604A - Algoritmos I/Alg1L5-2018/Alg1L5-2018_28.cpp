#include <stdio.h>

main() {
  int larg, comp, classe, pot, lamp, potTotal, lampTotal = 0, area;

  for(int cmd=1; cmd != 0; cmd++) {
    printf("\nInsira as medidas do %do comodo ou 0 para encerrar: \n",cmd);
    printf("Largura: ");
    scanf("%d", &larg);
    
    if(!larg) break;
    
	printf("Comprimento: ");
    scanf("%d", &comp);
    printf("Insira a classe de iluminacao: ");
    scanf("%d", &classe);
    
    area = larg*comp;
    
    switch(classe)
    {
      case 1:
	  	pot = 15;
        break;
      case 2:
	  	pot = 18;
        break;
      case 3:
	  	pot = 20;
        break;
    }
    
    pot*= area;
    lamp = pot/60;
    
    if (pot/60 != 0) lamp++;
      
    printf("\n%do comodo:\nArea: %d\nPotencia: %d\nLampadas: %d\n",cmd,area,pot,lamp);
    potTotal+= pot;
    lampTotal+= lamp;
  }
  
  if(lampTotal) printf("\nTotal \nLampadas: %d\nPotencia: %d",lampTotal,potTotal);
}
