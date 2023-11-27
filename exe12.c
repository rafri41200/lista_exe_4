#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main()
{
  int X[N], Y[N];
  int M[N][N] = {0};

  srand(time(NULL));

  for (int i = 0; i < N; i++)
  {
    *(X + i) = rand() % N;
  }

  for (int i = 0; i < N; i++)
  {
    int r = rand() % 10 + 1;

    if (0 < r && r <= 3)
    {
      *(Y + i) = *(X + i);
    }
    else if (3 < r && r <= 5)
    {
      *(Y + i) = *(X + i) - 1;
    }
    else if (5 < r && r <= 7)
    {
      *(Y + i) = *(X + i) + 1;
    }
    else if (8 < r && r <= 9)
    {
      *(Y + i) = *(X + i) - 2;
    }
    else if (9 < r && r <= 10)
    {
      *(Y + i) = *(X + i) + 2;
    }
    else
    {
      *(Y + i) = *(X + i);
    }
  }

  printf("X = [");
  for (int i = 0; i < N; i++)
  {
    printf(" %d", *(X + i));
  }
  printf(" ]\n");

  printf("Y = [");
  for (int i = 0; i < N; i++)
  {
    printf(" %d", *(Y + i));
  }
  printf(" ]\n");

  for (int i = 0; i < N; i++)
  {
    *(*(M + *(X + i)) + *(Y + i)) += 1;
  }
  printf("M =\n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%d ", *(*(M + i) + j));
    }
    printf("\n");
  }

  return 0;
}
