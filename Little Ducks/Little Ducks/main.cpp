//
//  main.cpp
//  Little Ducks
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long long int n ;
    scanf("%lld",&n);
    
    while(n!=-1){
        if(n==0)n=1;
        printf("%lld\n",n-1);
        scanf("%lld",&n);
    }
    
    
    
    return 0;
}
