//
//  main.c
//  Jumping Frog
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int gameover=0,next,n,atual,height=0;
    
    scanf("%d%d",&height,&n);
    
    scanf("%d",&atual);
    
    for(int i=1;i<n;i++){
        scanf("%d",&next);
        
        if(abs(next-atual)>height){
            printf("GAME OVER\n");
            gameover=1;
        }
        atual=next;
    }
    
    if(!gameover)
        printf("YOU WIN\n");
    
    
    return 0;
}
