//
//  main.cpp
//  Engine Failure
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,previous,forward,cont=0;
    scanf("%d%d",&n,&previous);
    
    for(int i=2;i<=n;i++){
        scanf("%d",&forward);
        if(forward<previous){
            cont=i;
            break;
        }
        previous=forward;
    }
    
    
    printf("%d\n",cont);
    
    return 0;
}
