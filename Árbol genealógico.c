#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() { 
    int opcion; 
    
    while(opcion!=7) { 
    printf("\n"); 
    printf("*******************************\n"); 
    printf("* ==== Árbol Genealógico ==== *\n"); 
    printf("*                             *"); 
    printf("\n* Elija una opción:           *"); 
    printf("\n* 1. Bisabuelos Paternos.     *"); 
    printf("\n* 2. Bisabuelos Maternos.     *"); 
    printf("\n* 3. Abuelos Paternos.        *"); 
    printf("\n* 4. Abuelos Maternos.        *"); 
    printf("\n* 5. Padres.                  *"); 
    printf("\n* 6. Familia Propia.          *");
    printf("\n* 7. Hijos.                   *");
    printf("\n*******************************\n"); 
    printf("\nSu opción es: "); 
    scanf("%d", &opcion); 
    printf("\n"); 
    
    if(opcion==1) { 
    
    printf(" === Bisabuelos  Paternos === \n "); 
    printf("\n José Valadez. "); 
    printf("\n Lourdes Meza.\n"); 
    } 
    
    if(opcion==2) { 
    
    printf(" === Bisabuelos Maternos === \n"); 
    printf("\n Fernando Escamilla. "); 
    printf("\n María Alcaide.\n");
    } 
    
    if(opcion==3) { 
    
    printf(" === Abuelos Paternos === \n"); 
    printf("\n Antonio Valadez. "); 
    printf("\n Concepción Meza.\n");
    } 
    
    if(opcion==4) { 
    
    printf(" === Abuelos Maternos === \n"); 
    printf("\n Eufemio Escamilla. "); 
    printf("\n Carmen Alcaide.\n"); 
    } 
    
    if(opcion==5) { 
    printf(" === Padres === \n"); 
    printf("\n Jesus Valadez. "); 
    printf("\n Maricela Escamilla. \n"); 
    } 
    
    if(opcion==6) {
    printf(" === Familia Propia === \n");
    printf("\n Zoe Cortés. ");
    printf("\n Brenda Valadez.  \n");
    }
    
    if(opcion==7) {
    printf(" === Hijos === \n");
    printf("\n Zoemy Cortés Valadez.  \n");
    }
    
    }
}