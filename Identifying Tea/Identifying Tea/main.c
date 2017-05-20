//
//  main.c
//  Identifying Tea
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int search,n,cont=0;
    scanf("%d",&search);
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        
        if(n==search){
            cont++;
        }
        
        
    }
    
    printf("%d\n",cont);
    
    
    return 0;
}
