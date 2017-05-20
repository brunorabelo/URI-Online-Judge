//
//  main.c
//  Exceeding Z
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, max,cont=1;
    
    scanf("%d",&n);
    
    do{
        scanf("%d",&max);
    }while (max<=n);
    
    for(int i=n;i<max;){
        cont++;
        n++;
        i+=n;
    }
    
    printf("%d\n",cont);
    
    
    
    return 0;
}
