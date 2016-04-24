#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b,c;
    
    scanf("%lf %lf", &a, &b);
    
    c = a/b;
    
    printf("%.3lf km/l\n", c);
    
    system("PAUSE");
    
    return 0;
}
