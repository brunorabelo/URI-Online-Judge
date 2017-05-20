//
//  main.c
//  Primary Arithmetic
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int charToInt(char a){
    
    return a-48;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int t1,t2,cont,carry,sum,a,b,i;
    char s1[11],s2[11],temp[11];
    cont=carry=0;
    
    while(scanf("%s%s",s1,s2)>0&&(strcmp(s1, "0")||strcmp(s2, "0"))){
        cont=0;
        t1=strlen(s1);
        t2=strlen(s2);
        
        
        carry=0;
        for(i=0;i<t1&&i<t2;i++){
            a=charToInt(s1[t1-1-i]);
            b=charToInt(s2[t2-1-i]);
            
            if(a+b+carry>=10){
                cont++;
            }
            carry=(a+b+carry)/10;
        }
        
        while(i<t2){
            carry=(carry+charToInt(s2[t2-1-i++]))/10;
            if(carry>0)
                cont++;
        }
        while(i<t1){
            carry=(carry+charToInt(s1[t1-1-i++]))/10;
            if(carry>0)
                cont++;
        }
        
        
        if(cont>0){
            printf("%d carry operation",cont);
            if(cont>1)
                printf("s");
            
        }
        else
            printf("No carry operation");
        printf(".\n");
        
        
        
        
    }
    
    return 0;
}
