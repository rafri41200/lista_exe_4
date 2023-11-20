#include<stdio.h>

int encontrarMenor(int num1, int num2){
   return(num1 < num2) ? num1 : num2;
}

int main(){
   int numero, menorValor;
   
   menorValor = __INT_MAX__;

   while(1){
      printf("digite um número (ou 0 para sair)\n");
      scanf("%d", &numero);

      if(numero == 0){
         printf("programa encerrado.\n");
         break;
      }

      menorValor = encontrarMenor(numero, menorValor);

      printf(" menor valor fornecido até agora: %d \n", menorValor);
   }

   return 0;
}