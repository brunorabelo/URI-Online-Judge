//
//  main.c
//  S Sequence II
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n=1,den=1;
    float sum=0.0;
    
    for(;n!=39;n=n+2,den=2*den){
        sum+=((float)n/(float)den);
    }
    
    printf("%.2f\n",sum);
    return 0;
}
