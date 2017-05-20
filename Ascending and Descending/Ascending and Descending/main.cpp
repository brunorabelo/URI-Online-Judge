//
//  main.cpp
//  Ascending and Descending
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int x,y;
    
    scanf("%d%d",&x,&y);
    
    while(x!=y){
        x>y?printf("Decrescente\n"):printf("Crescente\n");
        scanf("%d%d",&x,&y);
        
    }
    
    
    return 0;
}
