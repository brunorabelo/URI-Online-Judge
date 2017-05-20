//
//  main.c
//  Factorial Again!
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
long long int fat(int a){
    return a<=1?1:fat(a-1)*a;
}

int charInt(char a){
    return (int)a-48;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char buff[6];
    long long int decimal;
    int cont,tam;
    while(scanf("%s",buff)>0&&strcmp("0", buff)){
        cont=0;
        decimal=0;
        tam=strlen(buff);
        
        for(int i=0;i<tam;i++){
            int a=charInt(buff[i]);
            int f=fat(tam-i);
            decimal+=charInt(buff[i])*fat(tam-i);
        }
    
        
        printf("%lld\n",decimal);
    }
    
    
    
    return 0;
}
