//
//  main.c
//  Ano Bissexto
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main() {
    char ch;
    while((ch =getchar())!='s'){
        int ano;
        printf("Digite o ano: ");
        scanf("%d",&ano);
        if(((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
            printf("\n%d é bissexto",ano);
        }
        else{
            printf("\nAno não é bissexto");
        }
        printf("\n\n");
    }
    
    
}
