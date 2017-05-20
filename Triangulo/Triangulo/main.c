//
//  main.c
//  Triangulo
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float maior(float a, float b){
    
    float maior = (a+b)+fabsf(a-b);
    maior=maior/2;
    return maior;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
   
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
        printf("Perimetro = %.1f\n",a+b+c);
    }else{
        printf("Area = %.1f\n",(a+b)*c/2.0);
    }
    
    return 0;
}
