#include <stdio.h>
 
int main() {
 
    int h, n;
    float sh, salary;
    
    scanf("%i", &n);
    scanf("%i", &h);
    scanf("%f", &sh);
    
    salary = sh * h;    
    
    printf("NUMBER = %i\n", n);
    printf("SALARY = U$ %.2f\n", salary);
 
    return 0;
}
