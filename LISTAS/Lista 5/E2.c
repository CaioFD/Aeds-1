#include <stdio.h> 

void fib(int vezes){
    int fib1 = 0;
    int fib2 = 1;
    int soma = 1;
    for (int i = 0; i < vezes; i++) {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    printf("O numero de fibonacci e de: %d\n", soma);
}

int main() {

    int vezes;

    printf("Digite a quantidade de vezes que você quer o numero de fib: ");
    scanf("%d", &vezes); 


    fib(vezes);

    return 0;
}