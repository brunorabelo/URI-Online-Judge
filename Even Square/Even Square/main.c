//
//  main.c
//  Even Square
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int input;
    
    scanf("%d",&input);
    
    for(int i=2;i<=input;i=i+2){
        printf("%d^2 = %d\n",i,i*i);
        
    }
    
    
    return 0;
}
