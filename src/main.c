#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "x2.h"

int main(int argc, char* argv[])
{
    double a,b,c,D,S,P;
    printf("ax^2+bx+c \n");
    printf("Vvedite a,b,c");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = Dec(a,b,c);
    if (a == 0)
    {
        S = kofa0(b,c);
        printf("Coren raven: %lf",S);
    }
    if (b == 0)
    {
        S = kofb0(a,c);
        printf("Coren raven: %lf",S);
    }
    if (D == 0)
    {
        S = Dec0(a,b);
        printf("Coren raven: %lf",S);
    }
    if (D < 0)
    {
        printf("Cornei net");
    }
    if (D > 0)
    {
        S = Dec1(a,b,D);
	P = Dec2(a,b,D);
        printf("1 Coren raven: %lf \n",S);
        printf("2 Coren raven: %lf \n",P);
    }

    return 0;
}
