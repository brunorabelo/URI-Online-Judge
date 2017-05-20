//
//  main.c
//  MaratonIME helps Pablito
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int verifica_ancestral(long long int a1, long long int b1);

int verifica_ancestral(long long int a1, long long int b1){
    
    long long int maior = (a1>b1)? a1:b1;
    long long int menor = (a1>b1)? b1:a1;
    
    long long int resto=0;
    if(maior%menor==0) return 1;
    if(maior%menor==1) return 0;
    
    do{
        resto = maior%menor;
        maior=menor;
        menor=resto;
    }while(resto!=1&&resto!=0);
    
    return resto?0:1;

}

int main(int argc, const char * argv[]) {
    
    int n_test_cases;
    
    scanf("%d",&n_test_cases);
    
    for(int i=0;i<n_test_cases;i++){
        long long int a1,b1;
        scanf("%lld %lld",&a1,&b1);
        
        verifica_ancestral(a1,b1)?printf("Sim\n"):printf("Nao\n");
        
    }
    
    
    return 0;
}
