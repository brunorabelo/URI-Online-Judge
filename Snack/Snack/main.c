//
//  main.c
//  Snack
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float preco[] = {4.00,4.50,5.00,2.00,1.50};
    
    int q,c;
    scanf("%d%d",&c,&q);
    
    
    printf("Total: R$ %.2f\n",preco[c-1]*q);
    
    return 0;
}
