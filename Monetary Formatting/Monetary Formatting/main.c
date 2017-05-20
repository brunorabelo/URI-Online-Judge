//
//  main.c
//  Monetary Formatting
//
//  Created by MacBook on 16/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    char num[11];
    int cent,len,resto;
    
    while(scanf("%s%d",num,&cent)>0){
        len=strlen(num);
        resto=len%3==0?3:len%3;
        printf("$");
        for(int i=0;i<len;i=i+3){
            printf("
        }
        
        
    }
    
    
    return 0;
}
