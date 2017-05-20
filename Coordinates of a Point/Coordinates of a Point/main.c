//
//  main.c
//  Coordinates of a Point
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,y;
    
    do{
        
        scanf("%d %d",&x,&y);
        
        if(x>0&&y>0){
            printf("primeiro");
            
            printf("\n");
        }
        
        else if(x<0&&y>0){
            printf("segundo");
            
            printf("\n");   }
        else if(x<0&&y<0){
            printf("terceiro");
            
            printf("\n");
        }
        else if(x>0&&y<0){
            printf("quarto");
            
            printf("\n");
        }
    }
    while(x!=0&&y!=0);
    
    
    return 0;
}
