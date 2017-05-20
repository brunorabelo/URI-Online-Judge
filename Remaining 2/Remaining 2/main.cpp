//
//  main.cpp
//  Remaining 2
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    
    scanf("%d",&n);
    if(n>2){
        for(int i=2;i<=10000;i=i+n){
            printf("%d\n",i);
        }
    }
    return 0;
}
