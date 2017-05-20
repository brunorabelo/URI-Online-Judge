//
//  util.h
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#ifndef util_h
#include math.h
#define util_h

void mostrarVetorInt(int *vetor,int lenght);

void mostrarVetorInt(int *vetor,int lenght){
    
    for(int i=0;i<lenght;i++){
        printf("%d\n",vetor[i]);
    }
    
}

int greatest(int a,int b){
    int maior = (a+b-abs(a-b))/2
}

#endif /* util_h */
