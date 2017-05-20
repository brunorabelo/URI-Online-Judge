//
//  main.c
//  Seq Fibonacci
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <time.h>
long long int fibonacci(int a){
    if(a==1||a==2) return 1;
    else return fibonacci(a-2)+fibonacci(a-1);
}

long long int fibonacciFor(int a){
    long long int a1=1,a2=1;
    long long int sum=1;
    if(a==1||a==2) return 1;
    for(int i=3;i<=a;i++){
        sum=a1+a2;
        a1=a2;
        a2=sum;
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    do {
        int n;
        printf("Digite o termo que deseja obter: ");
        scanf("%d",&n);
        
        if(!(n>0))break;
        
        clock_t start, end;
        double cpu_time_used;
        
        start = clock();
        
        printf("%lld\n---\n",fibonacciFor(n));
        
        end = clock();
        cpu_time_used = ((double) (end - start)); // CLOCKS_PER_SEC;
        printf("Tempo pra recursão: %lf\n\n-----",cpu_time_used);
        
    
    }while (1);
    return 0;
}
