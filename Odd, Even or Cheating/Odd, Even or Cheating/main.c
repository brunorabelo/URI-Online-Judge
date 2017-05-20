//
//  main.c
//  Odd, Even or Cheating
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int p,j1,j2,r,a;
    
    scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
    
    if((((j1+j2)%2!=p && (r==0 && a==0))  || (r==0 && a==1))|| (r==1 && a==0)){
        printf("Jogador 1 ganha!\n");
    }
    else
        printf("Jogador 2 ganha!\n");
    
    
    return 0;
}
