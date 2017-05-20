//
//  main.cpp
//  Passwords Validator
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char string[10000];
    int lc=0,uc=0,number=0,invalida=0,lenght;
    
    
    while(gets(string)){
        lenght=strlen(string);
        lc=0,uc=0,number=0,invalida=0;
        if(strlen(string)>32 || strlen(string)<6){
            invalida=1;
//          break;
        }
        else{
            
        }
        for(int i=0;i<strlen(string);i++){
            if(string[i]>='a' && string[i]<='z')
                lc=1;
            else if(string[i]>='A' && string[i]<='Z')
                uc=1;
            else if(string[i]>='0' && string[i]<='9')
                number=1;
            else{
                invalida=1;
                break;
            }
        }
        if(invalida)
            printf("Senha invalida.\n");
        else if(lc&&uc&&number)
            printf("Senha valida.\n");
        else{
            printf("Senha invalida.\n");
        }
    }
    
    
    
    
    
    return 0;
}
