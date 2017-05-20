//
//  main.cpp
//  Fixed Password
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int password;
    scanf("%d",&password);
    
    while (password!=2002) {
        printf("Senha Invalida\n");
        scanf("%d",&password);
    }
    printf("Acesso Permitido\n");
    
    return 0;
}
