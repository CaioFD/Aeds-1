#include <stdio.h>

int main() {

    double areaBase=0.0, altura=0.0, volume=0, tercoLado=0; 

    printf("Digite a area da base da piramide : ");
    scanf("%lf", areaBase);
    
    double lado = areaBase/4;

    printf("Digite a altura da piramide : ");
    scanf("%lf", altura);
    // para calcular o volume, a formula e: V= 1/3L * L * H

    tercoLado= lado/3; // representa o 1/3L
    volume = tercoLado * lado * altura; 
    
    double areaTotal=0.0, areaTriangulo=0.0;

    areaTriangulo = (areaBase * altura)/2;
    areaTotal = (4 * areaTriangulo) + areaBase;

return 0;
}