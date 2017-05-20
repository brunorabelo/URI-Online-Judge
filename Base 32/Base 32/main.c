//
//  main.c
//  Base 32
//
//  Created by MacBook on 12/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//
typedef unsigned long long int natural;
#include <stdio.h>
#include <string.h>
char returnChar (unsigned long long int a){
    if(a>=10)
        return (char) 55 +a;
    else
        return (char) 48+a;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    char str[1000]=" ";
    int cont=0;
    natural resto;
    natural n;
    scanf("%llud",&n);
    while(n!=0){
        strcpy(str, " ");
        cont=0;
        resto=n%32;
        
        while(n>31){
            str[cont++]=returnChar(resto);
            n=n/32;
            resto=n%32;
        }
        str[cont++]=returnChar(n);
        
        for(int i=cont-1;i>=0;i--)
            printf("%c",str[i]);
        
        printf("\n");
        scanf("%llud",&n);
    }
    
    
    printf("0\n");
    return 0;
}
