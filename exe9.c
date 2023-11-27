#include <stdio.h>

#define N 5

void troca(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

int main()
{
  int valores[N] = {65,54,87,92,10};
  
  printf("valores antes:\n");

    for (int i = 0; i < N; i++)
  {
    printf(" %d\n", valores[i]);
  }
  
  for (int i = 0; i < N-1; i++)
  {
    for (int j = 0; j < N-1-i; j++)
    {
      if (valores[j] > valores[j+1])
      {
        troca(&valores[j],&valores[j+1]);
      }
      
    }
    
  }
  printf("valores depois do bubble sort:\n");
  for (int i = 0; i < N; i++)
  {
    printf( " %d\n", valores[i]);
  }
  

  return 0;
}