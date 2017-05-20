//
//  main.c
//  Natural Sum
//
//  Created by MacBook on 12/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long long int a,b;
    
    scanf("%lld%lld",&a,&b);
    
    long long int sum;
    
    sum=(a+b)*(b-a+1)/2;
    
    printf("%lld\n",sum);
    
    
    return 0;
}
