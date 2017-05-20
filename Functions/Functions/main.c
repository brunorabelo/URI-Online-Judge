//
//  main.c
//  Functions
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
long int rafael(int x,int y){
    return 3*x*3*x+y*y;
}
long int beto(int x,int y){
    return 2*x*x+25*y*y;
}
long int carlos(int x,int y){
    return -100*x+y*y*y;
}
int main(int argc, const char * argv[]) {
    // insert code here...

    int n,x,y,g;
    long int r,b,c;
    char nome[3][7]={"Rafael","Beto","Carlos"};
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        
        if(rafael(x,y)>beto(x,y)&&rafael(x, y)>carlos(x, y))
            g=0;
        else if(beto(x,y)>carlos(x, y))
            g=1;
        else
            g=2;
        
        printf("%s ganhou\n",nome[g]);
        
        
    }
    
    
    return 0;
}
