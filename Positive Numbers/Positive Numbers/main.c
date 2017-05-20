//
//  main.c
//  Month
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n;
    int cont=0;
    for(int i=0;i<6;i++){
    scanf("%f",&n);
        if(n>0)cont++;
    }
    
    printf("%d valores positivos\n",cont);
    
    
    return 0;
}
