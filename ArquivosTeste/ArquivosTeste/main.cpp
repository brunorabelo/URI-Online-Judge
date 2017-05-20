//
//  main.cpp
//  ArquivosTeste
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main() {

    FILE *arq;
    int a,n;
    
    arq = fopen("teste.txt", "r");
    
    fscanf(arq, "%d",&n);
    
    for(int i=0;i<n;i++){
        fscanf(arq, "%d",&a);
        printf("O quadrado de %d e: %d\n",a,a*a);
        
    }
    

    fclose(arq);
    getchar();
    
    return 0;
}
