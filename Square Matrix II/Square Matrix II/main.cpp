//
//  main.cpp
//  Square Matrix II
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int size;
    
    scanf("%d",&size);
    
    while(size!=0){
        
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                printf("%3d",abs(i-j)+1);
                if(j!=size-1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&size);
    }
    
    return 0;
}
