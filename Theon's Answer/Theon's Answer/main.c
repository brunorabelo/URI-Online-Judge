//
//  main.c
//  Theon's Answer
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,menor,index=1,atual;
    
    scanf("%d",&n);
    scanf("%d",&menor);
    for(int i=1;i<n;i++){
        scanf("%d",&atual);
        if(menor>atual){
            index=i+1;
            menor=atual;
        }
    }
    
    printf("%d\n",index);
    
    
    
    return 0;
}
