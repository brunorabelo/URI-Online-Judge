//
//  main.c
//  Feynman
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int recursiva(int n){
    
    if(n==1)
        return 1;
    
    else
        return recursiva(n-1)+n*n;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int x;
    
    while(scanf("%d",&x)>0&&x>0){
        printf("%d\n",recursiva(x));
    }
    
    
    
    return 0;
}
