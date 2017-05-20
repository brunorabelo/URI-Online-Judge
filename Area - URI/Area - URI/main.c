//
//  main.c
//  Area - URI
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main() {
    double a,b,c;
    double pi = 3.14159;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    
    //a
    double area1,area2,area3,area4,area5;
    area1 = a*c/2;
    area2 = c*c*pi;
    area3 = (a+b)*c/2;
    area4 = b*b;
    area5 = b*a;
    
    printf("TRIANGULO: %.3lf\n",area1);
    printf("CIRCULO: %.3lf\n",area2);
    printf("TRAPEZIO: %.3lf\n",area3);
    printf("QUADRADO: %.3lf\n",area4);
    printf("RETANGULO: %.3lf\n",area5);
    
    
    
    
    
    return 0;
}
