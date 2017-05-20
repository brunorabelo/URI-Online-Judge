//
//  main.c
//  Bill
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int n,a;
    scanf("%d",&n);
    int r=1;
    for(int i=0;i<n;i++){
        r=1;
        scanf("%d",&a);
        if(a%2==0)
            r=0;
        printf("%d\n",r);
        
        
    }
    
    
    return 0;
}
