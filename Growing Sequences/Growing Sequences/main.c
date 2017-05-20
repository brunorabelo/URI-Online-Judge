//
//  main.c
//  Growing Sequences
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

void print(int a);

void print(int a){
    printf("1");
    for(int i=2;i<=a;i++){
        printf(" %d",i);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    scanf("%d",&n);
    
    
    while (n!=0) {
        if(n!=1){
        print(n);
        printf("\n");
        }else{
            
            printf("1\n");
        }
        scanf("%d",&n);
        
    }
    
    
    
    return 0;
}
