//
//  main.c
//  Score Validation
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float a,b;
    
    scanf("%f",&a);
    while(a<0||a>10){
        printf("nota invalida\n");
        scanf("%f",&a);
    }
    
    scanf("%f",&b);
    while(b<0||b>10){
        printf("nota invalida\n");
        scanf("%f",&b);
    }
    
    printf("media = %.2f\n",(a+b)/2);
    return 0;
}
