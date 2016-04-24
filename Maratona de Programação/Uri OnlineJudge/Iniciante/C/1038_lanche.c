#include <stdio.h>
 
int main() {
 
    int x, y;
    float p;
    
    scanf("%i %i", &x, &y);
    
    switch(x){
		  case 1:
			   p = y * 4.00;
			   break;
		  case 2:
			   p = y * 4.50;
			   break; 
		  case 3:
			   p = y * 5.00;
			   break;
		  case 4:
			   p = y * 2.00;
			   break;
		  case 5:
			   p = y * 1.50;
			   break;
		  default:
			   break;          
    }
    
    printf("Total: R$ %.2f\n", p);
 
    return 0;
}
