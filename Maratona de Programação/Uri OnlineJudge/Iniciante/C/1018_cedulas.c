#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double n;
    
    int n100, n50, n20, n10, n5, n2, n1, resto;
    
    scanf("%lf", &n);
    
    n100 = n / 100;
    
    resto = (n - (n100 * 100));
    
    n50 = resto /50;
    
    resto -= n50 * 50;
    
    n20 = resto / 20;  
    
    resto -= n20 * 20;
    
    n10 = resto / 10;
    
    resto -= n10 * 10;
    
    n5 = resto / 5;
    
    resto -= n5 * 5;
    
    n2 = resto / 2;
    
    resto -= n2 * 2;
    
    n1 = resto;    
    
    printf("%.0lf\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, n100, n50, n20, n10, n5, n2, n1);
    
    system("PAUSE");
    
    return 0;
}
