#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

main()
{
 setlocale(LC_ALL,"");
 int N;
 printf("Digite um N�mero:");
 scanf("%d",&N);
  while(N > 0){
   N--;
 if(N %2 == 0){
    printf("Os N�meros pares s�o: %d \n ",N);
        }
     }
}
