//
//  main.c
//  Factorial Sum
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//


//Pelos testes, a função recursiva é mais lenta.
#include <stdio.h>

long long int factorialFor(long long int n);
long long int factorial(long long int n);
long long int factorial(long long int n){
    if(n==0) return 1;
    else{
        return (n)*factorial(n-1);
    }
}

long long int factorialFor(long long int n){
    long long int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    
    long long int a,b;
    
    while (scanf("%lld %lld",&a,&b)!=EOF){
     
        
        long long int fatorialA = factorial(a);
        
        
        long long int fatorialB = factorialFor(b);
        
        printf("%lld\n",fatorialA+fatorialB);
        
        
        
        
    }
    
    
    
    
    
    return 0;
}

