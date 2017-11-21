//Resolvendo a equação cos(x) - x pelo método do ponto fixo

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main()
{    
    double x0, x, y, y1, precisao;
    
    
   precisao = 1e-7;
   
   printf("Entre com um chute: ");
   scanf("%lf", &x0);
   
   
   do
   {   y = cos(x0);
       
       y1 = fabs(y - x0);
       x0 = y;
      
       printf(" %lf\n", x0);
   
   }while(y1>precisao);
   
   
   printf("Ponto: %lf\n", x0);

} 
   
        
