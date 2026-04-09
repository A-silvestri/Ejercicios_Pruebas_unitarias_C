#include <stdio.h>

int esBisiesto(int anio);

int main()
{
    int resultado = esBisiesto(2015);

    if(resultado = 1)
    {
        printf("Es bisiesto");
    }
    else
    {
        printf("No es bisiesto");
    }

    return 0;
}

int esBisiesto(int anio)
{
    if(anio / 4 == 0 && anio / 100 != 0 || anio / 400 == 0)
    {
        return 1;
    }
    else
    {        
        return 0;
    }
}