//
//  main.c
//  Brick Game
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int test_cases,n,age,index;
    char b[100];
    scanf("%d",&test_cases);
    
    for(int i=0;i<test_cases;i++){
        
        scanf("%d",&n);
        
        index = n/2+1;
        
        for(int j=0;j<index;j++)
            scanf("%d",&age);
        if(index!=1)
            gets(b);
        
        
        printf("Case %d: %d\n",i+1,age);
        
        
    }
    
    
    return 0;
}
