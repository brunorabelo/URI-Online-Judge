//
//  main.c
//  Array change I
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[20];
    for(int i=19;i>=0;i--){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,a[i]);
    }
    
    
    return 0;
}
