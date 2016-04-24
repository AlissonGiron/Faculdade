#include <stdio.h>
#include <stdlib.h>

int main(){
    double r;
    double vol;

    scanf("%lf", &r);

    vol = ((4.0/3) * 3.14159) * r * r * r;

    printf("VOLUME = %.3lf\n", vol);

    system("PAUSE");
    return 0;
}
