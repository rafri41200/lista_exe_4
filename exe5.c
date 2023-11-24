#include <stdio.h>
#define N 100
int main()
{

  char string[N];

  printf("digite uma palavra\n");
  scanf("%s", string);

  char *ponteiro = string;
  int tamanho = 0;

  while (*ponteiro != '\0')
  {
    ponteiro++;
    tamanho++;
  }
  
  printf(" O tamanho da string: %d", tamanho);

  return 0;
}