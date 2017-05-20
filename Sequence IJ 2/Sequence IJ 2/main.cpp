//
//  main.cpp
//  Sequence IJ 2
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for(int i=1;i<=9;i=i+2){
        int j=7;
        for(;j>=5;j--){
            printf("I=%d J=%d\n",i,j);
        }
    }
    
    return 0;
}
