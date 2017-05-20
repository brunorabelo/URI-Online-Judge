//
//  main.cpp
//  Array Replacement I
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a[10];
    
    for(int i=0;i<10;i++){
        scanf("%d",a+i);
        if(a[i]==NULL || a[i]<0) a[i]=1;
        printf("X[%d] = %d\n",i,a[i]);
    }
    
    return 0;
}
