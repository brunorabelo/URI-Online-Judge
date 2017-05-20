//
//  main.cpp
//  Pepe, I Already Took the Candle!
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,h,m,o;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&h,&m,&o);
        printf("%02d:%02d - A porta ",h,m);
        if(o==0)
            printf("fechou!");
        else
            printf("abriu!");
        
        printf("\n");
    }
    
    
    return 0;
}
