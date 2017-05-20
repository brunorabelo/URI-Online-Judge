//
//  main.c
//  Type of Fuel
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[3]={0,0,0},n;
    scanf("%d",&n);
    
    while (n!=4) {
        if(n<4&&n>0)
            array[n-1]++;
        scanf("%d",&n);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",array[0]);
    printf("Gasolina: %d\n",array[1]);
    printf("Diesel: %d\n",array[2]);
    
    
    
    
    return 0;
}
