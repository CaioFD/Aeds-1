#include <stdio.h>
#include <math.h>

int main(){

int n, soma = 0;
printf("Digite o numero de termos n: ");
scanf("%d", &n);

for (int  i = 0; i < n; i++)
{
    soma = 1/(pow(2,i));
}
    return 0;
}