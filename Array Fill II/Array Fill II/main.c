//
//  main.c
//  Array Fill II
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,i%n);
    }
    
    return 0;
}
