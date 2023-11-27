#include <stdio.h>
#define N 20

int main()
{

  char str1[N] = "olá, Rafael!";
  char strBusca;

  char *ptr1 = str1;

  printf("Qual letra você está procurando?\n");
  scanf("%c", &strBusca);


  while (*ptr1 != '\0')
  {
    if (*ptr1 == strBusca) // usa asterisco ou não?
    {
      printf("a letra que você estava procurando existe dentro da frase\n");
      break;
    }
    
    ptr1++;
  }
  if (*ptr1 == '\0')
  {
      printf(" a letra que vc estava procurando n está dentro da frase\n");
  }
  

  return 0;
}