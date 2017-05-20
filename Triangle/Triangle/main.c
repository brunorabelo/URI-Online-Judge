//
//  main.c
//  Triangle
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void ordena(int *x, int *y);
void ordena(int *x, int *y){
    int maior = *x+*y+abs(*x-*y);
    maior=maior/2;
    int menor = *x+*y-abs(*x-*y);
    menor=menor/2;
    
    *x=menor;
    *y=maior;
}

int possivel(int a, int b, int c);
int possivel(int a, int b, int c){
    
    ordena(&a,&b);
    ordena(&b, &c);
    
    if(c>=a+b) return 0;
    else return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[4];
    
    
    scanf("%d%d%d%d",array,array+1,array+2,array+3);
    
    if(possivel(array[0], array[1], array[2])||possivel(array[3], array[1], array[2])
       ||possivel(array[0], array[3], array[2])||possivel(array[0], array[1], array[3])){
        printf("%c\n",'S');
    }else{
        printf("N\n");
    }
    
    
    return 0;
}
