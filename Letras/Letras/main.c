//
//  main.c
//  Letras
//
//  Created by MacBook on 21/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char letra;
    char palavra[200];
    int total=0;
    int contem=0;
    scanf("%c",&letra);
    
    while(scanf("%s",palavra)!=EOF){
    
        total++;
        for(int i=0;i<strlen(palavra);i++){
            if(letra==palavra[i]) {
                contem++;
                break;
            }
        }
        
        
    }
    
    printf("%.1f\n",(float) ((float)contem*100.00/(float)total));
    
    return 0;
}
