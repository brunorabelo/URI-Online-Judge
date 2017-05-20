//
//  main.c
//  Array Selection I
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n;
    for(int i=0;i<100;i++){
        scanf("%f",&n);
        n<=10?printf("A[%d] = %.1f\n",i,n):1;
    }
    
    return 0;
}
