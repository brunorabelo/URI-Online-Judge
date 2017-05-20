//
//  main.c
//  Sequence IJ 3
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int s=7;
    for(int i=1;i<=9;i=i+2){
        for(int j=s;j>=(s-2);j--){
            printf("I=%d J=%d\n",i,j);
        }
        s=s+2;    }
    
    return 0;
}
