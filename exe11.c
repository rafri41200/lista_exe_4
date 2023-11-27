#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main() {
    int X[N], Y[N];
    int M[N][N] = {0};  

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        *(X + i) = rand() % N;
        *(Y + i) = rand() % N;
    }

    printf("X = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", *(X + i));
    }
    printf(" ]\n");

    printf("Y = [");
    for (int i = 0; i < N; i++) {
        printf(" %d", *(Y + i));
    }
    printf(" ]\n");

    for (int i = 0; i < N; i++) {
        *(*(M + *(X + i)) + *(Y + i)) += 1;
    }

    printf("M =\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(M + i) + j));
        }
        printf("\n");
    }

    return 0;
}
