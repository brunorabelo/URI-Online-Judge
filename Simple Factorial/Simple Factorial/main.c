//
//  main.c
//  Simple Factorial
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int factorial(int n);

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    
    return 0;
}

int factorial(int n){
    
    if(n==0) return 1;
    else{
        return n*factorial(n-1);
    }
    
}
