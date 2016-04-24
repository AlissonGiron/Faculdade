#include <stdio.h>
#include<stdlib.h>

int main(){
    char nome[10];
    double sal, vend, total;

    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &vend);

    total = sal + (vend * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    system("PAUSE");
    return 0;
}
