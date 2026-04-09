#include<stdio.h>

char determinarcalificacion(int puntaje);
void test();
void PruebaUnitaria(int numPrueba, int nota, char letra);

int main()
{

    char letra;

    //letra = determinarcalificacion(73);
    test();

    //printf("La calificacion es %c",letra);

    return(0);
}

void PruebaUnitaria(int numPrueba, int nota, char letra)
{
    char resultado = determinarcalificacion(nota);

    if(resultado == letra)
    {
        printf("Test %d OK\n",numPrueba);
    }else
    {
        printf("Test %d Fallo \n",numPrueba);
    }
}

void test()
{
    PruebaUnitaria(1,100,'A');
    PruebaUnitaria(2,80,'B');
    PruebaUnitaria(3,70,'C');
    PruebaUnitaria(4,60,'D');
    PruebaUnitaria(5,50,'F');
}

char determinarcalificacion(int puntaje)
{
    char letra;

    if(puntaje>=90 && puntaje<=100)
    {
        letra = 'A';
    }
    else if(puntaje>=80 && puntaje<=89)
    {
        letra = 'B';
    }
    else if (puntaje>=70 && puntaje<=79)
    {
        letra = 'C';
    }
    else if (puntaje>=60 && puntaje<=69)
    {
        letra = 'D';
    }
    else if (puntaje>=0 && puntaje<=59)
    {
        letra = 'F';
    }
    
    return letra;

}