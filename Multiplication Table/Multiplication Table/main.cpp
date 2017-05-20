//
//  main.cpp
//  Multiplication Table
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
    
    
    return 0;
}
