//
//  main.cpp
//  Honey Reservoir
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

#define pi 3.14;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double area, altura,volume,diametro;
    
    
    
    while(scanf("%lf%lf",&volume,&diametro)>0){
    
    area = diametro*diametro*3.14/4;
    altura=volume/area;
    printf("ALTURA = %.2lf\n",altura);
    printf("AREA = %.2lf\n",area);
    }
    
    
    return 0;
}
