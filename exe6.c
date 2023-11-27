#include <stdio.h>
#define N 20
int main()
{

  char origem[N] = "Olá , Rafael!";
  char destino[N];

  char *ptrOrigem = origem;
  char *ptrDestino = destino;

  while (*ptrOrigem != '\0')
  {
    *ptrDestino = *ptrOrigem;
    ptrDestino++;
    ptrOrigem++;
  }
  // Adicionando o caractere nulo ao final da string de destino
  *ptrDestino = '\0';

  printf("string original %s\n", origem);
  printf("string copiada %s\n", destino);

  return 0;
}