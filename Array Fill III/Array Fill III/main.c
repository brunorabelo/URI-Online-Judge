//
//  main.c
//  Array Fill III
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double n;
    scanf("%lf",&n);
    printf("N[%d] = %.4lf\n",0,n);
    for(int i=1;i<100;i++){
        n=n/2.0000;
        printf("N[%d] = %.4lf\n",i,n);
    }
    
    
    return 0;
}
