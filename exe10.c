#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main() {
    int X[N];
    int F[N] = {0};  

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        *(X + i) = rand() % N;
    }
  
    printf("X = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", *(X + i));
    }
    printf(" ]\n");

    for (int i = 0; i < N; i++) {
        (*(F + *(X + i)))++;
    }

    printf("F = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", *(F + i));
    }
    printf(" ]\n");


    return 0;
}
