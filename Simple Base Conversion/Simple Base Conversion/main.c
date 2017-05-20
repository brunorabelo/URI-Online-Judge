//
//  main.c
//  Simple Base Conversion
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int powInt(int a,int exp){
    int result=1;
    for(int i=1;i<=exp;i++){
        result*=a;
    }
    
    return result;
}

int charInt(char a){
    a=toupper(a);
    if((int)a<=90&&(int)a>=65)
        return a-55;
    else
        return a-48;
}

char intChar(int a){
    
    if(a>=10)
        return (char)a+55;
    else
        return (char)a+48;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    int tam,decimal,cont;
    

    char buffer[20],hex[20];
    
    while(scanf("%s",buffer)>0&&buffer[0]!='-'){
        
        if(buffer[1]=='x'){
            decimal=0;
            tam=strlen(buffer);
            for(int i=2;i<tam;i++){
                decimal+=powInt(16, i-2)*charInt(buffer[tam+1-i]);
            }
            printf("%d\n",decimal);
        }
        else{
            cont=0;
            decimal=atoi(buffer);
            while(decimal>15){
              
                hex[cont++]=intChar(decimal%16);
                decimal=decimal/16;
            }
            hex[cont++]=intChar(decimal);
            printf("0x");
            for(int i=cont-1;i>=0;i--)
                printf("%c",hex[i]);
            printf("\n");
            
            
        }
        
        
        
        
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
