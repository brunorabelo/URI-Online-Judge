//
//  main.c
//  Linha na matriz
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float matriz[12][12];
    
    char operacao;
    int linha;
    
    scanf("%d ...",&linha);
    scanf("%c",&operacao);
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&matriz[i][j]);
        }
    }
    
    float resultado=0.0;
    float soma=0.0;
    for(int i=0;i<12;i++){
        soma+=matriz[linha][i];
    }
    
    switch (operacao) {
        case 'S':
            resultado=soma;
            break;
            
            case 'M':
            resultado=soma/12;
        default:
            break;
    }
    
    printf("%.1f\n",resultado);
    
    
    
    return 0;
}
