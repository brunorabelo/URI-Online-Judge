//
//  main.c
//  Guilherme and His Kites
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int sides;
    
    unsigned long long int result=0;
    
    scanf("%d",&sides);
    
    for(int i=4;i<=sides;i++){
        result+=(i-2);
    }
    
    printf("%llu\n",result);
    
    
    
    return 0;
}
