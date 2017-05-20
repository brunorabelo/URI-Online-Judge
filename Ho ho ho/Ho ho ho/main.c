//
//  main.c
//  Ho ho ho
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    char ho[]={"Ho"};
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("%s",ho);
        if(i!=n-1)
            printf(" ");
    }
    
    printf("!\n");
    
    
    
    return 0;
}
