//programa de comparación de numero y mostrar el menor
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("dame el primer numero:");
    scanf("%d", &a);
    printf("dame el segundo numero:");
    scanf("%d", &b);
    printf("dame el tercer numero:");
    scanf("%d", &c);
    
    
	if(a!=b && a!=c && b!=c){
            if(a<b){
                    if(a<c){ printf("el numero menor es %d", a);}
                        else{ printf("el numero menor es %d", c);}
                    }
            else if(b<c){ printf("el numero menor es %d", b);}
                    else{ printf ("el numero menor es %d", c);}
                     
                     }              
    else{ printf("introduce otros numero diferentes"); }
    return 0;
    
    
}
  
