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
    int notas[12]={100,50,20,10,5,2,1};
    char notc[][10] = {"100,00","50,00","20,00","10,00","5,00","2,00","1,00"};
    scanf("%d",&valor);
    
    int temp = valor;
    
    for(int i=0;i<7;i++){
        temp = temp-notas[i];
        
        int cont=0;
        
        while(temp>=0){
            cont++;
            temp=temp-notas[i];
        }
        matriz[i]=cont;
        temp=temp+notas[i];
    }
    printf("%d\n",valor);
    
    for(int i=0;i<7;i++){
        
        
        printf("%d nota(s) de R$ %s\n",matriz[i],notc[i]);
    }
    
    return 0;
}
