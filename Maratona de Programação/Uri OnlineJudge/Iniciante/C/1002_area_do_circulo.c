#include <stdio.h>
#include <stdlib.h>

int main(){
    double r;
    double area;

    scanf("%lf", &r);

    area = 3.14159 * (r * r);

    printf("A=%.4lf\n", area);

    system("PAUSE");
    return 0;
}
