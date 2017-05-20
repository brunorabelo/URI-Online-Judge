//
//  main.c
//  Logical Sequence
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,i*i+1,i*i*i+1);
    }
    
    return 0;
}
