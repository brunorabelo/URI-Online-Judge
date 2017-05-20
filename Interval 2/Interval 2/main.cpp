//
//  main.cpp
//  Interval 2
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long int n,interval[2]={10,20},cont=0,a;
    scanf("%ld",&n);
    
    for(int i=0;i<n;i++){
        scanf("%ld",&a);
        
        if(a>=interval[0]&&a<=interval[1])
            cont++;
        
        
    }
    
    printf("%ld in\n%ld out\n",cont,n-cont);
    
    return 0;
}
