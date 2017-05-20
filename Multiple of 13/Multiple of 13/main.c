//
//  main.c
//  Multiple of 13
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int sum=0,x,y,maior,menor;
    
    scanf("%d%d",&x,&y);
    
    maior=x>y?x:y;
    menor=x>y?y:x;
    
    for(int i=menor;i<=maior;i++){
        sum+=(i%13!=0)?i:0;
    }
    
    printf("%d\n",sum);
    
    
    
    return 0;
}
