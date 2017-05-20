//
//  main.cpp
//  Event
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long long int a,b;
    
    scanf("%lld%lld",&a,&b);
    
    
    while(a!=0&&b!=0){
        
        printf("%lld\n",a*b);
        
        scanf("%lld%lld",&a,&b);
        
    }
    
    return 0;
}
