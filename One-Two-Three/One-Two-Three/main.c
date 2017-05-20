//
//  main.c
//  One-Two-Three
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char numeros[3][6]={"one","two","three"},temp[6];
    int num[3]={1,2,3};
    int erro[3]={0,0,0},n,tamanho;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        erro[0]=erro[1]=erro[2]=0;
        scanf("%s",temp);
        tamanho=strlen(temp);
        for(int j=0;j<tamanho;j++){
            for(int k=0;k<3&&j<3;k++)
                temp[j]==numeros[k][j]?1:erro[k]++;
            if(tamanho>3){
                erro[0]++;
                erro[1]++;
            }
        }
        tamanho=-1;
        while(erro[++tamanho]>1);
        
        printf("%d\n",num[tamanho]);
        
        
        
    }
    
    
    
    
    return 0;
}
