//
//  main.cpp
//  Parity
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char str[105],cont=0;
    
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='1')
            cont++;
    }
    
    if(cont%2==0)
        printf("%s0\n",str);
    else{
        printf("%s1\n",str);
    }
    
    
    return 0;
}
