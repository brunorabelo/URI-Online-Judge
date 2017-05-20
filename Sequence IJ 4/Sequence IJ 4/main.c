//
//  main.c
//  Sequence IJ 4
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int decimal = 0;
    int a=0;
    for(int i=0;i<11;i++){
        for(int j=1;j<=3;j++){
            if(decimal%10==0)printf("I=%d J=%d\n",a,j+a);
            else printf("I=%d.%d J=%d.%d\n",a,decimal%10,j+a,decimal%10);
        }
        decimal =decimal+2;
        if(decimal%10==0) ++a;
    }
    
    return 0;
}
