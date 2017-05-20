//
//  main.c
//  Divisors I
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

long int mdcEuclides2(long int a,long int b);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long int n,sum;
    int a;
    scanf("%d",&a);
    
    
    for(int i=0;i<a;i++){
        scanf("%ld",&n);
        
        sum=1;
        for(long int i=2;i<n;i++){
            
            if(mdcEuclides2(i, n)==i)
                sum+=i;
            
        }
        if(sum==n&&n!=1) printf("%ld eh perfeito\n",n);
        else printf("%ld nao eh perfeito\n",n);
    }
    return 0;
}
long int mdcEuclides2(long int a,long int b){
    long int maior=a>b?a:b;
    long int menor=a>b?b:a;
    
    
    long int resto=maior%menor;
    
    while(resto!=0){
        maior=menor;
        menor=resto;
        resto=maior%menor;
        
    }
    return menor;
}

