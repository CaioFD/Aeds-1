#include <stdio.h> 

int fatorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

int comp(int linha, int coluna) {
    if (coluna == 0 || coluna == linha) {
        return 1;
    } else {
        return comp(linha - 1, coluna - 1) + comp(linha - 1, coluna);
    }
}

int main() {

    int n, linhas, colunas, numero;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (linhas = 0; linhas < n; linhas++)
    {
        for (colunas = 0; colunas <= linhas; colunas++)
        {
            numero = comp(linhas, colunas);
            printf("%d ", numero);
        }
        printf("\n");
    }

    return 0;
}