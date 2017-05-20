//
//  main.c
//  Divisors I
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int mdcEuclides2(int a,int b);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i==1) printf("1\n");
        else{
            if(mdcEuclides2(i, n)==i)
                printf("%d\n",i);
            
        }
    }
    
    return 0;
}
int mdcEuclides2(int a,int b){
    int maior=a>b?a:b;
    int menor=a>b?b:a;
    
    
    int resto=maior%menor;
    
    while(resto!=0){
        maior=menor;
        menor=resto;
        resto=maior%menor;
        
    }
    return menor;
}

