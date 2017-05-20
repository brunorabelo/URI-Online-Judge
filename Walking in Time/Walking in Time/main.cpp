//
//  main.cpp
//  Walking in Time
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==b||b==c||a==c || (a+b==c || a+c==b || b+c==a)){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    
    return 0;
}
