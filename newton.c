#include <stdio.h>
#include <stdlib.h>
#include<math.h>

main()
{    
    double x0, x, y, y1, precisao;
    
    
   precisao = 1e-7;
   
   printf("Entre com um valor de x: ");
   scanf("%lf", &x0);
   
   
  
   do
   {   
       x = x0 - ( (cos(x0) - x0) / (-sin(x0) - 1.) );
       
       y = fabs(x0 - x);
       
       x0 = x;
 
   }while(y>precisao);
   
   
   printf("Ponto: %lf\n", x);

} 
