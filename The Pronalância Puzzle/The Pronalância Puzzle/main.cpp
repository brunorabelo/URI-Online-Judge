//
//  main.cpp
//  The Pronalância Puzzle
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    long long int a;
    
    scanf("%lld",&a);
    while(a>0){
        printf("%lld",a%10);
        a=a-a%10;
        a=a/10;
    }
    
    printf("\n");
    
    
    
    
    return 0;
}
