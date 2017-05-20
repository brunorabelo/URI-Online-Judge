//
//  main.c
//  MaratonIME plays Cîrokime
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, minimo,a;
    minimo=0;
    scanf("%d",&n);
    for (int i=0;i<n; i++) {
        scanf("%d",&a);
    }
    
    
    while(n>=1){
        minimo++;
        n=n/2;
    }
    
    printf("%d\n",minimo);
    
    return 0;
}
