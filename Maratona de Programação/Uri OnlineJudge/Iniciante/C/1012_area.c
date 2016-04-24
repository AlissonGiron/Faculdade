#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b,c;

    double areat, areac, areatz, areaq, arear;
    scanf("%lf %lf %lf", &a, &b, &c);

    areat = a * c / 2;

    areac = 3.14159 * (c * c);

    areatz = ((a + b) * c)/2;

    areaq = b * b;

    arear = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", areat, areac, areatz, areaq, arear);

    system("PAUSE");
    return 0;
}
