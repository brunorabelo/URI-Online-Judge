//
//  main.c
//  Procurando Subsequências
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>



int len(char vetor[]);


int len(char vetor[]){
    int i=0;
    while(vetor[i++]!='\0');
    return --i;
}
int main(int argc, const char * argv[]) {
    
    char n1[35];
    char n2[35];
    
    int caso=0;
    while(scanf("%s", n1)!=EOF){
        scanf("%s",n2);
        int palavras=0;
        caso++;
        int quantidade = len(n1);
        int limite = len(n2);
        
        int pos=0;
        
        for(int i=0;i<=limite-quantidade;i++){
            int cont=0;
            if(n2[i]==n1[cont]) {
                cont++;
                for(int j=1;j<quantidade;j++){
                    if(n2[i+j]==n1[cont]){
                        cont++;
                    }
                }
                if(cont==quantidade) {
                    pos=i;
                    palavras++;
                }
            }
            
        }
//        if(caso!=1){
//            printf("\n");
//        }
        printf("Caso #%d:\n",caso );
        if(palavras>0){
            printf("Qtd.Subsequencias: %d\n",palavras);
            printf("Pos: %d\n",pos+1);
        }else{
            printf("Nao existe subsequencia\n");
        }
        printf("\n");
        
        
        
        
        
        
        
    }
    
    return 0;
}
