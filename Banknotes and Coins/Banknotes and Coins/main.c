//
//  main.c
//  Banknotes and Coins
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    double input;
    int valor;
    
    int matriz[12];
    int notas[12]={10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    scanf("%lf",&input);
    
    valor=round(input*100);
    int temp = valor;
    
    for(int i=0;i<12;i++){
        temp = temp-notas[i];
        
        int cont=0;
        
        while(temp>=0){
            cont++;
            temp=temp-notas[i];
        }
        matriz[i]=cont;
        temp=temp+notas[i];
    }
    
    printf("NOTAS:\n");
    for(int i=0;i<6;i++){
        printf("%d nota(s) de R$ %.02lf\n",matriz[i],(double)notas[i]/100);
    }
    printf("MOEDAS:\n");
    for(int i=6;i<12;i++){
        printf("%d moeda(s) de R$ %.02lf\n",matriz[i],(double)notas[i]/100);
    }
    
    return 0;
}
