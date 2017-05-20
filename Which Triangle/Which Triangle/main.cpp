//
//  main.cpp
//  Which Triangle
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c,maior;
    scanf("%d%d%d",&a,&b,&c);
    
    if(a+b<=c||a+c<=b||b+c<=a){
        printf("Invalido\n");
    }
    else{
        if(a==b && b==c){
            printf("Valido-Equilatero\n");
        }
        else if(a==b || b==c || a==c){
            printf("Valido-Isoceles\n");
        }else{
            printf("Valido-Escaleno\n");
        }
        printf("Retangulo: ");
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a + b*b){
            printf("S\n");
        }
        else
            printf("N\n");
    }
    
    
    
    
    
    return 0;
}
