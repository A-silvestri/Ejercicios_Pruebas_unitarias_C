#include<stdio.h>

int probarfuncion(char letra);

int main()
{

    probarfuncion('6');

    return(0);
}

int probarfuncion(char letra)
{
    int num;

    if(letra >= 97 && letra <= 122)
    {
        num = letra - 32;
    } 
    else if (letra >= 65 && letra <= 90)
    {
        num = letra + 32;
    }
    else if (letra >= 48 && letra <= 57)
    {
        num = letra;
    }
    else
    {
        num = -1;
    }

    printf("El caracter ascii es : %d",num);

    return num;
}