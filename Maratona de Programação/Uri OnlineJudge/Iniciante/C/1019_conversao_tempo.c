#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int h, m, s, resto;
    
    h = 0;
    m = 0;
    s = 0;
    
    scanf("%d", &n);
    
    h = n / 3600;
    
    resto = (n - (h * 3600));
    
    m = resto/60;
        
    resto -= (m * 60);
    
    s = resto;        
    
    printf("%d:%d:%d\n", h, m, s);
    
    system("PAUSE");
    
    return 0;
}

