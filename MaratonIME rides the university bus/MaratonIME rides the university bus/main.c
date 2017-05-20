//
//  main.c
//  MaratonIME rides the university bus
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int institutes,questions,l1,l2;
    int *paradas;
    paradas = (int*) malloc(institutes*sizeof(int));
    scanf("%d %d",&institutes,&questions);
    for(int i=0;i<institutes;i++){
        scanf("%d",paradas+i);
    }
    for(int i=0;i<questions;i++){
        scanf("%d %d",&l1,&l2);
        int sum=0;
        for(int j=l1-1;j<=l2-1;j++){
            sum+=*(paradas+j);
        }
        if(sum%2) printf("Nao\n");
        else printf("Sim\n");
    }
    
    free(paradas);
    
    
    return 0;
}
