//
//  main.c
//  Factorial Sum
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//


//Pelos testes, a função recursiva é mais lenta.
#include <stdio.h>
#include <time.h>

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
        
        
        clock_t start, end;
        double cpu_time_used;
        
        start = clock();
        
        long long int fatorialA = factorial(a);
        
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Tempo pra recursão: %lf\n%lld\n-----",cpu_time_used,fatorialA);
        
        clock_t start1,end1;
        double cpu_time_used1;
        start1 = clock();
        
        long long int fatorialB = factorialFor(b);
        
        end1 = clock();
        cpu_time_used1 = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
        printf("Tempo pra for: %lf\n%lld\n",cpu_time_used1,fatorialB);
        
        
        
        
    }
    
    
    
    
    
    return 0;
}

