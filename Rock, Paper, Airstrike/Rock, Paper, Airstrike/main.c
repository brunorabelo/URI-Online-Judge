//
//  main.c
//  Rock, Paper, Airstrike
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    char p1[20],p2[20];
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%s%s",p1,p2);
        
        if(!strcmp(p1, "ataque")){
            if(!strcmp(p2, "ataque"))
                printf("Aniquilacao mutua\n");
            else printf("Jogador 1 venceu\n");
            
        }else if(!strcmp(p1, "pedra")){
            if(!strcmp(p2, "pedra"))
                printf("Sem ganhador\n");
            else if(!strcmp(p2, "ataque"))
                printf("Jogador 2 venceu\n");
            else
                printf("Jogador 1 venceu\n");
            
        }else{
//            if(!strcmp(p2, "ataque"))
//                printf("Jogador 2 ganhou\n");
            if (!strcmp(p2, "papel"))
                printf("Ambos venceram\n");
            else printf("Jogador 2 venceu\n");
            
            
        }
        
        
    }
    
    
    
    
    
    return 0;
}
