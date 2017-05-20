//
//  main.cpp
//  Approximate Number of Primes
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#define c 1.25506
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double min, max;
    long long int n;
    scanf("%lld",&n);
    
    min = n/log(n);
    max = min*c;
    
    printf("%.1lf %.1lf\n",min,max);
    
    
    
    
    return 0;
}
