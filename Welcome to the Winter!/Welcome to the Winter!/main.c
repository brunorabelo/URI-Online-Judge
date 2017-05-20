//
//  main.c
//  Welcome to the Winter!
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

void printF();
void printT();
void printF(){
    printf(":)\n");
}
void printT(){
    printf(":(\n");
}



int main(int argc, const char * argv[]) {
    // insert code here...
    int t1,t2,t3;
    
    scanf("%d%d%d",&t1,&t2,&t3);
    
    if(t2-t1>=0){
        if(t2-t1>t3-t2 || t3-t2<=0)
            printT();
        else printF();
    }
    else{
        if(t3-t2>t2-t1)
            printF();
        else printT();
    }
    
    
    
    return 0;
}
