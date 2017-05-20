//
//  main.c
//  S Sequence
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float n=1.0;
    float den=1.0;
    float sum=0.0;
    for(;den<=100;den++){
        sum+=n/den;
    }
    
    printf("%.2f\n",sum);
    
    return 0;
}
