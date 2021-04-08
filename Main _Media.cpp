#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"");
    
  float N1=11,N2=11,N3=11,Media;

while((N1>10) || (N1<0)){
printf("\tEntre com a Primeira nota: ");
scanf("%f",&N1);
}

while((N2>10) || (N2<0)){
printf("\tEntre com a Segunda nota: ");
scanf("%f",&N2);
}

while((N3>10) || (N3<0)){
printf("\tEntre com a Terceira nota: ");
scanf("%f",&N3);
}
Media=(N1+N2+N3)/3;
// Para imprimir apenas os 2 primeiros dígitos após o ponto.
printf("\n\tNota 1: %.2f \n\tNota 2: %.2f \n\tNota 3: %.2f \n\n\tA média é: %.2f\n\n",N1,N2,N3,Media);
}