//
//  main.c
//  Bob Conduit
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,r1,r2;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&r1,&r2);
        printf("%d\n",r1+r2);
    }
    
    
    
    return 0;
}
