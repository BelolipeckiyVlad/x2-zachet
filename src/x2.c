#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "x2.h"
double Dec(double a, double b, double c)
{
    double D = (b * b) - (4 * a * c);
    return D;
}
double Dec0(double b, double a)
{
    double S = (-1 * b) / (2 * a);
    return S;
}
double Dec1(double a, double b, double D)
{
    double S = (-1 * b + sqrt(D)) / (2 * a);
    return S;
    double P = (-1 * b - sqrt(D)) / (2 * a);
    return P;
}
