//
//  main.c
//  Malloc Matriz
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int **matriz;
    
    int n,m;
    printf("Linhas: ");
    scanf("%d",&n);
    printf("Colunas: ");
    scanf("%d",&m);
    
    
    matriz=(int**)malloc(n*sizeof(int*));
    
    if(!matriz)
        exit(0);
    for(int i=0;i<n;i++){
        matriz[i] =(int*)malloc(m*sizeof(int));
        for(int j=0;j<m;j++){
            printf("Valor [%d,%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%3d",matriz[i][j]);
        }
        printf("\n");
    }
    
    
    
    free(matriz);
    
    return 0;
}
