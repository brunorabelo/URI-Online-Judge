//
//  main.c
//  MDC Euclides Duas Variaveis
//
//  Created by MacBook on 04/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
typedef unsigned long int natural;

natural MDC (natural a, natural b);

natural MDC(natural a, natural b){
    
    //funcionando35
    while(b!=0 && a%b!=0){
        if(a>b)
            a=a%b;
        else{
         b=b%a;
        }
    }
//    if(b==0)
//        b=a;
    return (b==0)?a:b;
//    return b;
}

int main(int argc, const char * argv[]) {
    natural a,b;
    scanf("%lu%lu",&a,&b);
    
    printf("MDC: %lu\n",MDC(a, b));
    
    
    
    
    
    return 0;
}
