#include <stdio.h>
#define N 5

int main()
{

  int valorInt[N];
  float valorFloat[N];
  char valorChar[N];

  printf(" Digite %d valores inteiros:\n", N);
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &valorInt[i]);
  }

  int *pInt = valorInt;

  for (int i = 0; i < N; i++)
  {
    printf("valor: %d, endereço: %p\n", *pInt, (void *)pInt);
    pInt++;
  }

  printf(" digite %d valores float\n", N);
  for (int i = 0; i < N; i++)
  {
    scanf("%f", &valorFloat[i]);
  }

  float *pFlt = valorFloat;

  for (int i = 0; i < N; i++)
  {
    printf("valor %.2f, endereco: %p\n", *pFlt, (void *)pFlt);
    pFlt++;
  }

  printf("digite %d caracteres:\n", N);
  for (int i = 0; i < N; i++)
  {
    scanf(" %c", &valorChar[i]);
  }

  char *pChar = valorChar;

  for (int i = 0; i < N; i++)
  {
    printf("valor %c, endereco: %p\n", *pChar, (void *)pChar);
    pChar++;
  }

  return 0;
}
// APARENTEMENTE OS ENDEREÇOS DE CADA TIPO FICAM EM DETERMINADO ESPAÇO COMO SE ESTIVESSEM LADO A LADO OU COMO SE FOSSEM BLOCOS PRÓXIMOS