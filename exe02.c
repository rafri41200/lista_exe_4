#include<stdio.h>

void trocarValores(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int a, b;

    printf("digite o valor de a:\n");
    scanf("%d", &a);

    printf("Digite o valor de b:\n");
    scanf("%d", &b);

    printf("valores originais a = %d, b = %d \n", a, b);

    trocarValores(&a, &b);

    printf("Valores após a troca: a = %d b = %d\n", a, b);

    return 0;
}