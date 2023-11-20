#include<stdio.h>

int main(){
    
    int num1, num2, soma;
    int *ptr_soma;

    printf("digiteo primeiro número\n");
    scanf("%d", &num1);

    printf("digite o segundo número\n");
    scanf("%d", &num2);

    soma= num1 + num2;
    ptr_soma = &soma;

    printf("a soma é: %d\n", *ptr_soma);
    printf(" O endereço de memória da soma é: %p\n", &ptr_soma);

    return 0;
}