//
//  main.cpp
//  Sequence of Sequence
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

long long int number(long long int a);
long long int number(long long int a){
    if(a==0) return 1;
    else
        return a+number(a-1);
}
void printSequences(long long int a);
void printSequences(long long int a){
    int i,j=1,limit;
    
    printf("0");
    for(i=1;i<=a;i++){
        limit=i;
        while(limit-->0){
            printf(" %d",i);
        }
    }
    printf("\n");
    printf("\n");
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int cont=1;
    long long int n,numeros;
    while (scanf("%lld",&n)>0) {
        numeros=number(n);
        printf("Caso %d: %lld numero",cont++,numeros);
        if(numeros>1)
            printf("s\n");
        else printf("\n");
        printSequences(n);
    }
    
    
    
    return 0;
}
