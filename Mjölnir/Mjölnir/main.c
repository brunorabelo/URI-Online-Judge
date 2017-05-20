//
//  main.c
//  Mjölnir
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,force;
    char name[50];
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%s",name);
        scanf("%d",&force);
        
        if(!strcmp(name,"Thor"))
            printf("Y\n");
        else printf("N\n");
        
        
    }
    
    
    return 0;
}
