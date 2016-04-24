#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double n1, n2, x;
    
    scanf("%lf %lf", &n1, &n2);
        
    x = (n1 * n2)/12;
        
    printf("%.3lf\n", x);
    
    system("PAUSE");
    
    return 0;
}
