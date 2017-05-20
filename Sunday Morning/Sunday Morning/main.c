//
//  main.c
//  Sunday Morning
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b;
    
    
    char c;
    
    while(scanf("%d%c%d",&a,&c,&b)!=EOF){
        
        if(8-a>1){
            printf("Atraso maximo: 0\n");
        }
        else if(8-a==1){
            printf("Atraso maximo: %d\n",b);
        }else{
            printf("Atraso maximo: %d\n",(a-8)*60+b+60);
        }
        
        
    }
    
    
    
    
    return 0;
}
