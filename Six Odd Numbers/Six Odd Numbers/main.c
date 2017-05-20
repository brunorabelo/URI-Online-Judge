//
//  main.c
//  Six Odd Numbers
//
//  Created by MacBook on 25/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, cont=0;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(i%2!=0)printf("%d\n",i);
    }
    
    return 0;
}
