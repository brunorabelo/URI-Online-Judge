//
//  main.c
//  Rest of a Division
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,maior,menor;
    scanf("%d%d",&x,&y);
    maior = x+y+abs(x-y);
    maior=maior/2;
    menor = x+y-abs(x-y);
    menor=menor/2;
    
//    int resto =menor%5;
//    if(resto==2){
//        printf("%d",menor+1);
//    }
//    
    for(int i=menor+1;i<maior;i++){
        if(i%5==3||i%5==2) printf("%d\n",i);
    }
    
    
    return 0;
}
