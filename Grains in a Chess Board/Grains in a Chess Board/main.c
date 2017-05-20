//
//  main.c
//  Grains in a Chess Board
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,s;
    
    double result;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&s);
        
        result= (pow(2,s)-1)*0.001/12.0;
        
        printf("%llu kg\n",(long long unsigned int)result);
        
    }
    
    
    return 0;
}
