//
//  main.c
//  The Pythagorean Theorem
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>


int mdc(int x,int y){
    
    
    while(y!=0 && x%y!=0){
        if(x>y)
            x=x%y;
        else
            y=y%x;
    }
    
    return y!=0?y:x;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int matriz[3];
    
    while(scanf("%d%d%d",matriz,matriz+1,matriz+2)>0){
        
        printf("tripla");
        if(matriz[0]*matriz[0]==matriz[1]*matriz[1]+matriz[2]*matriz[2] ||
           matriz[2]*matriz[2]==matriz[1]*matriz[1]+matriz[0]*matriz[0] ||
           matriz[1]*matriz[1]==matriz[0]*matriz[0]+matriz[2]*matriz[2]){
            printf(" pitagorica");
            if(mdc(matriz[0],mdc(matriz[1], matriz[2]))==1)
                printf(" primitiva");
        }
        
        printf("\n");
        
        
    }
    
    
    return 0;
}
