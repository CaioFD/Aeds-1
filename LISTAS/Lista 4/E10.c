#include <stdio.h>

int fatorial(int x){
    int fatorial = 1;
    if (x == 0){
        return 1;
    }
    for (int i = 1; i <= x; i++)
    {
        fatorial*= i;
    }
    return fatorial;
}

int comp(int linha, int coluna){
    int resultado = fatorial(linha)/(fatorial(coluna)*fatorial(linha-coluna));
    return resultado;
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