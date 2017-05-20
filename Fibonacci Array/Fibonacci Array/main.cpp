//
//  main.cpp
//  Fibonacci Array
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
typedef unsigned long long int natural;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    natural n, x;
    scanf("%llu",&n);
    
    for(natural i=0;i<n;i++){
        scanf("%llu",&x);
        natural fib=0;
        natural a2=1,a1=0;
        if(x>1){
            for(natural a=1;a<x;a++){
                fib=a2+a1;
                a1=a2;
                a2=fib;
            }
        }
        
        if(x==0) printf("Fib(%d) = %d\n",0,0);
        else if(x==1) printf("Fib(%d) = %d\n",1,1);
        else printf("Fib(%llu) = %llu\n",x,fib);
        
        
    }
    
    
    return 0;
}


