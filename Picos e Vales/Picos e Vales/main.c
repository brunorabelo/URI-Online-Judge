//
//  main.c
//  Picos e Vales
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    
    
    int n;
    int resultado=0;
    
    scanf("%d",&n);
    
    int *medidas;
    
    medidas=(int *)malloc(sizeof(int)*n);
    
    if(!medidas){
        exit(1);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",medidas+i);
    }
    
    if(n<=2){
        int r=1;
        if(n==2&&medidas[0]==medidas[1]) r=0;
        printf("%d\n",r);
        return(0);
    }
    
    //supondo que esteja em ordem
    resultado=1;
    
    int teste1=0;
    int teste2=0;
    
    
    teste1 = medidas[0]>medidas[1];
    teste2 = medidas[1]>medidas[2];
    
    
    if(teste1==teste2){
        resultado=0;
    }
    else {
        
        for(int i=0;i<n-2;i=i+2){
            if(medidas[i]==medidas[i+1]||medidas[i+1]==medidas[i+2]){
                resultado=0;
                break;
            }
            
            
            if((((medidas[i]>medidas[i+1]))!=teste1)||((medidas[i+1]>medidas[i+2])!=teste2)){
                resultado=0;
                break;
            }
        }
        
        if(n%2==0){
            if((medidas[n-2]>medidas[n-1])!=teste1){
                resultado=0;
            }
            else if(medidas[n-2]==medidas[n-1]){
                resultado =0;
            }
        }
        
    }
    
    
    
    
    
    
    free(medidas);
    
    printf("%d\n",resultado);
    
    return 0;
}
