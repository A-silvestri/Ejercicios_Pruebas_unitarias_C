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
    if(determinarcalificacion(100)=='A')
        printf("Test 1 OK\n");
    else
        printf("Test 1 Fallo\n");

    if(determinarcalificacion(90)=='A')
        printf("Test 2 OK\n");
    else
        printf("Test 2 Fallo\n");

    if(determinarcalificacion(89)=='B')
        printf("Test 3 OK\n");
    else
        printf("Test 3 Fallo\n");

    if(determinarcalificacion(80)=='B')
        printf("Test 4 OK\n");
    else
        printf("Test 4 Fallo\n");

    if(determinarcalificacion(79)=='C')
        printf("Test 5 OK\n");
    else
        printf("Test 5 Fallo\n");

    if(determinarcalificacion(70)=='C')
        printf("Test 6 OK\n");
    else
        printf("Test 6 Fallo\n");

    if(determinarcalificacion(69)=='D')
        printf("Test 7 OK\n");
    else
        printf("Test 7 Fallo\n");

    if(determinarcalificacion(60)=='D')
        printf("Test 8 OK\n");
    else
        printf("Test 8 Fallo\n");

    if(determinarcalificacion(59)=='F')
        printf("Test 9 OK\n");
    else
        printf("Test 9 Fallo\n");

    if(determinarcalificacion(0)=='F')
        printf("Test 10 OK\n");
    else
        printf("Test 10 Fallo\n");

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