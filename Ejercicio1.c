#include <stdio.h>

int esBisiesto(int ano);

int main()
{
    int resultado = esBisiesto(2015);

    if(resultado = 1)
    {
        printf("El ano es bisiesto");
    }
    else
    {
        printf("No es ano bisiesto");
    }

    return 0;
}

int esBisiesto(int ano)
{
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        return 1;
    }
    else
    {        
        return 0;
    }
}