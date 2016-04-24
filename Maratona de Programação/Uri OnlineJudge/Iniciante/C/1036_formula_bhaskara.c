#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double d, x1, x2;
    double a,b,c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
   
    d = pow(b,2) - 4.0 * a * c;
    
    if(a != 0.0 && d >= 0){
         x1 = (-b + sqrt(d))/(2 * a);
         
         x2 = (-b - sqrt(d))/(2 * a);
         
         printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    else{
         printf("Impossivel calcular\n"); 
    }
    
    system("PAUSE");
    return 0;    
}
