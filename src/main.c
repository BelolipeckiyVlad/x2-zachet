#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "x2.h"

int main(int argc, char* argv[])
{
    double a,b,c,D,S,P;
    printf("ax^2+bx+c \n");
    printf("Vvedite a,b,c");
    scanf("%f %f %f", &a, &b, &c);
    D = Dec(a,b,c);
    if (D == 0)
    {
        S = Dec0(a,b);
        printf("Coren raven: %g",S);
    }
    if (D < 0)
    {
        printf("Cornei net");
    }
    if (D > 0)
    {
        S = Dec1(a,b,D);
        printf("1 Coren raven: %g \n",S);
        printf("2 Coren raven: %g \n",P);
    }

    return 0;
}
