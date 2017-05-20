//
//  main.c
//  MaratonIME returns home
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int r,c;
    
    scanf("%d %d",&r,&c);
    char linha[r][c];
    
    for(int i=0;i<r;i++){
        gets(linha[i]);
    }
    int maior_soma=0;
    int temp_soma=0;
    for(int i=0;i<r;i++){
        int c=0;
        if(i%2==0){
            c=0;
            char atual =linha[i][c++];
            if(atual=='_');
            else if(atual=='.')temp_soma++;
            else if(atual=='L'){
                if(maior_soma<temp_soma){
                    maior_soma=temp_soma;
                }
                temp_soma=0;
            }
        }
        else{
            
        }
        
        
    }
    
    
    
    return 0;
}
