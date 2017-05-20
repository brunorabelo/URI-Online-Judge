//
//  main.cpp
//  Array fill I
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,n);
        n=n*2;
    }
    return 0;
}
