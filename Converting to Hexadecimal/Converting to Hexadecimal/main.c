//
//  main.c
//  Converting to Hexadecimal
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char pegarChar(int n);
char pegarChar(int n){
    if(n>=10){
        switch (n) {
            case 10:
                return 'A';
                break;
                
            case 11:
                return 'B';
                break;
                
            case 12:
                return 'C';
                break;
                
            case 13:
                return 'D';
                break;
                
            case 14:
                return 'E';
                break;
                
            case 15:
                return 'F';
                break;
                
            default:
                break;
        }
    }
    
    char a=n+'0';
    
    return a;
}

void printTrazPraFrente(char numero[],int length);
void printTrazPraFrente(char numero[],int length){
    
    for(int i=length-1;i>=0;i--){
        printf("%c",numero[i]);
    }
    
    printf("\n");
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...

    int n,resto,quociente,original;
    
    char *numero;
    scanf("%d",&n);
    
    original=n;
    
    numero = (char*) malloc(sizeof(char)*10);
    int index=0;
    do{
        quociente=n/16;
        resto=n%16;
        
        numero[index++]=pegarChar(resto);
        
        n=quociente;
        
    }while(quociente>=16);
//    printf("Teste: %c\n",'1');
    if(original>=16)
    numero[index++]=pegarChar(quociente);
    
    printTrazPraFrente(numero, index);
    
    
    
    
    
    return 0;
}
