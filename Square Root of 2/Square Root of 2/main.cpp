//
//  main.cpp
//  Square Root of 2
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    double result,denominador=0;
    
    result=1.0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        denominador=1/(denominador+2);
    }
    
    printf("%.10lf\n",result+denominador);
    
    
    
    return 0;
}
