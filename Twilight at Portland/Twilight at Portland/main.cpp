//
//  main.cpp
//  Twilight at Portland
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int *l1,*l2,n,cont_temp=0;
    scanf("%d",&n);
    
    l1=(int*) malloc(sizeof(int)*(n+1));
    l2=(int*) malloc(sizeof(int)*(n+1));
    l2=(int*) malloc(sizeof(int)*(n+1));
    
    for(int j=0;j<n+1;j++)
        scanf("%d",l1+j);
    for(int i=1;i<n+1;i++){
        for(int j=0;j<n+1;j++)
            scanf("%d",l2+j);
        for(int k=0;k<n;k++){
            cont_temp=l1[k]+l1[k+1]+l2[k]+l2[k+1];
            if(cont_temp>=2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
        
        
        for(int l=0;l<n+1;l++){
            l1[l]=l2[l];
        }
        
        
        
    }
    
    
    
    
    free(l1);
    free(l2);
    
    
    
    
    
    
    return 0;
}
