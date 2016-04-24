#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    
    int a, m, d;
    
    scanf("%d", &n);
    
    a = n / 365;
    
    m = (n - 365 * a)/30;
    
    d = n - (a * 365 + m * 30);
     
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    
    system("PAUSE");
    return 0;    
}
