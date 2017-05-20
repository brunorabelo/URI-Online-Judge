//
//  main.c
//  Counting Crow
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char caw[] = {"caw"};
    char linha[30];
    int cont=0;
    
    
    while(scanf("%s",linha)!=EOF){
        if(!strcmp(linha,caw)){
            printf("%d\n",cont);
            cont=0;
            scanf("%s",linha);
        }
        else{
            for(int i=0;i<3;i++){
                if(linha[i]!='-')
                    cont+=pow(2, 2-i);
                    
            }
        }
        
    }
    
    
    
    return 0;
}
