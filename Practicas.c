#include<stdio.h>

char determinarcalificacion(int puntaje);
void test();

int main()
{

    char letra;

    //letra = determinarcalificacion(73);
    test();

    //printf("La calificacion es %c",letra);

    return(0);
}

void test()
{
    determinarcalificacion(100)=='A';return 1;
    determinarcalificacion(90)=='A';return 1;

    determinarcalificacion(89)=='B';return 1;
    determinarcalificacion(80)=='B';return 1;

    determinarcalificacion(79)=='C';return 1;
    determinarcalificacion(70)=='C';return 1;

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