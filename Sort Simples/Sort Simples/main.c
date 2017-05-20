//
//  main.c
//  Sort Simples
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    
    int vetor[3];
    
    scanf("%d %d %d",vetor,vetor+1,vetor+2);
    int original[3];
    for(int j=0;j<3;j++){
        original[j]=vetor[j];
    }
    
    int desordenado =0;
    
    int n=3;
    
    do{
        desordenado=0;
        for(int i=1;i<n;i++){
            
            if(vetor[i-1]>vetor[i]) {
                int temp = vetor[i-1];
                vetor[i-1]=vetor[i];
                vetor[i]=temp;
                desordenado=1;
                break;
            }
            
                
        }
    } while(desordenado);
    
    
    for(int i=0;i<3;i++){
        printf("%d\n",vetor[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%d\n",original[i]);
    }

    return 0;
}
