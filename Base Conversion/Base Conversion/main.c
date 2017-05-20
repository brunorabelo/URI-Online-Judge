//
//  main.c
//  Base Conversion
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


char inteiroChar(int a){
    
            if(a>=0 && a<=9)
                return (char)a+48;
            else
                return (char)a+87;
            
    
}

int charInteiro(char a){
//    switch (base) {
//        case 16:
    int result;
    
            if(a>=97 && a<=122)
                result= (int)a-87;
            else
                result= (int)a-48;
//            break;
    
//        case 2:
//            return (char) a+48;
//            break;
//        default:
//            break;
//    }
    return result;
    
}



void printBase(int dec,int base){
    char buffer[1000]="";
    int i=0,resto=dec%base;
    
    while(dec>base-1){
        resto=dec%base;
        
        buffer[i++]=inteiroChar(resto);
        dec=dec/base;
    }
    buffer[i++]=inteiroChar(dec);
    
    
    
    for(int i=strlen(buffer)-1;i>=0;i--){
        printf("%c",buffer[i]);
    }
    
}

int powInt(int base,int exp){
    int result=1;
    for(int i=1;i<=exp;i++){
        result=result*base;
    }
    
    return result;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    char buffer[100000];
    char base[4],padrao[3][4]={"dec","hex","bin"};
    
    int numero,n,cont_base=-1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        cont_base=-1;
        scanf("%s%s",buffer,base);
        
        while(strcmp(base, padrao[++cont_base]));
        
        printf("Case %d:\n",i+1);
        
        switch (cont_base) {
            case 0:
                numero =atoi(buffer);
                printBase(numero, 16);
                printf(" hex\n");
                printBase(numero, 2);
                printf(" bin\n");
                break;
                
            case 1:
//                sprintf(buffer, "%d",numero);
                numero = 0;
                for(int j=strlen(buffer)-1;j>=0;j--)
                    numero+=pow(16, j)*charInteiro(buffer[strlen(buffer)-1 -j]);
                printf("%d",numero);
                printf(" dec\n");
                printBase(numero, 2);
                printf(" bin\n");
                break;
                
            case 2:
//                sprintf(buffer, "%d",numero);
                numero = 0;
                for(int j=strlen(buffer)-1;j>=0;j--)
                    numero+=powInt(2, j)*charInteiro(buffer[strlen(buffer)-j-1]);
//                printBase(numero, 2);
                printf("%d",numero);
                printf(" dec\n");
                printBase(numero, 16);
                printf(" hex\n");
                break;
                
                
            default:
                break;
        }
        printf("\n");
    }
    
    
    return 0;
}
