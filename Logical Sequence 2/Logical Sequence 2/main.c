//
//  main.c
//  Logical Sequence 2
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x,y;
    
    scanf("%d%d",&x,&y);
    
    
    for(int i=1;i<=y-2;){
        printf("%d",i++);
        for(int j=1;j<x;j++){
            printf(" %d",i++);
        }
        printf("\n");
    }
    
    return 0;
}
