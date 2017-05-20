//
//  main.cpp
//  Square Root of 10
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    double result,denominador=0,numerador=1;
    
    scanf("%d",&n);
    
    result=3;
    
    for(int i=0;i<n;i++){
        denominador = 1.00/(denominador+6);
    }
    
    printf("%.10lf\n",result+denominador);
    
    
    return 0;
}
