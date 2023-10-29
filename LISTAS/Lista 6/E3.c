#include <stdio.h> 

#include <stdio.h>

typedef struct
{
    int ano;
    int mes;
    int dia;
} Data;

Data verificacao(int dia, int mes, int ano)
{
    Data data;

    if (ano >= 0 && mes >= 1 && mes <= 12)
    {
        switch (mes)
        {
        case 1:

            break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            {
                if (dia >= 1 && dia <= 29)
                {
                    data.ano = ano;
                    data.mes = mes;
                    data.dia = dia;
                }
                else
                {
                    data.ano = 0;
                    data.mes = 0;
                    data.dia = 0;
                }
            }
            else
            {
                if (dia >= 1 && dia <= 28)
                {
                    data.ano = ano;
                    data.mes = mes;
                    data.dia = dia;
                }
                else
                {
                    data.ano = 0;
                    data.mes = 0;
                    data.dia = 0;
                }
            }

            break;
        case 4: 
            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 6:

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 9: 

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        case 11: 

            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }

            break;
        default:
            if (dia >= 1 && dia <= 31)
            {
                data.ano = ano;
                data.mes = mes;
                data.dia = dia;
            }
            else
            {
                data.ano = 0;
                data.mes = 0;
                data.dia = 0;
            }
        }
    }
    else
    {
        data.ano = 0;
        data.mes = 0;
        data.dia = 0;
    }

    return data;
}

Data MaisDias(Data data, int dia){
    Data data2;
    data2.ano = data.ano;
    data2.mes = data.mes;
    data2.dia = data.dia;

    if (dia >= 0){
        data2.dia += dia;
        if (data2.dia > 31){
            data2.dia -= 31;
            data2.mes++;
            if (data2.mes > 12){
                data2.mes -= 12;
                data2.ano++;
            }
        }
    } else {
        data2.dia += dia;
        if (data2.dia < 1){
            data2.dia += 31;
            data2.mes--;
            if (data2.mes < 1){
                data2.mes += 12;
                data2.ano--;
            }
        }
    }

    return data2;
}

int main()
{

    int dia;
    int mes;
    int ano;

    printf("digite um dia do ano\n");
    scanf("%d", &dia);
   
    printf("digite um mes do ano\n");
    scanf("%d", &mes);
    
    printf("digite um ano\n");
    scanf("%d", &ano);
  

    Data data = verificacao(dia, mes, ano);

    if (data.ano == 0 && data.mes == 0 && data.dia == 0) {
        printf("Data invalida!\n");
    } else {
        printf("Data valida: %d/%d/%d\n", data.dia, data.mes, data.ano);
    }

return 0;
}