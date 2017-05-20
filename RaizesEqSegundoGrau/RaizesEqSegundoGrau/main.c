//
//  main.c
//  RaizesEqSegundoGrau
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main() {
    
    float a,b,c;
    
    printf("Insira os coeficientes da equação: ");
    scanf("%f %f %f",&a,&b,&c);
    
    float delta = b*b - 4*a*c;
    
    if(delta<0){
        printf("Não existem raízes reais");
    }
    else if(delta==0){
        printf("Existe uma raíz real: %f",(-b)/2);
        
        
    }
    
    else if(delta>0){
        printf("Existem duas raízes reais: %f e %f",(-b-sqrt(delta))/2,(-b+sqrt(delta))/2);
        
    }
    
    
    return 0;
}
