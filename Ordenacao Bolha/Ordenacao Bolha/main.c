//
//  main.c
//  Ordenacao Bolha
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void ordenarVetor(int *vetor,int q);

void mostrarVetorInt(int *vetor,int lenght);

void mostrarVetorInt(int *vetor,int lenght){
    
    for(int i=0;i<lenght;i++){
        printf("%d\n",vetor[i]);
    }
    
}

int main(int argc, const char * argv[]) {

    int q;
    scanf("%d",&q);
    
    int *vetor;
    
    vetor= malloc(q*sizeof(int));
    
    for(int i=0;i<q;i++){
        scanf("%d",vetor+i);
    }
    
    
    printf("------\n");
    mostrarVetorInt(vetor,q);
    
    
    printf("------\n");
    printf("\n");
    ordenarVetor(vetor,q);

    mostrarVetorInt(vetor,q);
    
    free(vetor);
    
    return 0;
}

void ordenarVetor(int *vetor,int lenght){
    
    int a,b;
    for(a=1;a<lenght;++a){
        for(b=lenght-1;b>=a;--b){
            if(vetor[b-1]>vetor[b]){
                int t=vetor[b-1];
                vetor[b-1]=vetor[b];
                vetor[b]=t;
            }
        }
    }
    
    
}
