#include<stdio.h>
#include<math.h>

main() {
  float media=0, maior, menor, altura, dif;
  int sexo, f=0, m=0;
  
  for(int k=0; k<12; k++) {
  	while(scanf("%f %d",&altura,&sexo) && (altura<=0 || sexo>2 || sexo<1));
    if(sexo == 1) m++;
    else {
      f++;
      media += altura;
    }
    if(!k) {
      maior = altura;
      menor = altura;
    } 
	else {
      if(altura > maior) maior = altura;
      if(altura < menor) menor = altura;
    }
  }
  
  dif = (m/12.0 - f/12.0)*100;
  if(dif < 0) dif *= -1;
  
  printf("\nMaior altura: %.2f \tMenor altura: %.2f", maior, menor);
  printf("\nMedia da altura das mulheres: %.2f", media/f);
  printf("\nNumero de homens: %d", m);
  printf("\nDiferenca percentual do numero de homens e mulheres: %.2f%%", dif);
}
