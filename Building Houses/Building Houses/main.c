//
//  main.c
//  Building Houses
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,p,saida;
    
    scanf("%d",&a);
    if(a!=0){
        while(a!=0){
            scanf("%d%d",&b,&p);
            saida=100*(a*b)/p;
            saida=sqrt(saida);
            
            printf("%d\n",saida);
            scanf("%d",&a);
        }
        
    }
    return 0;
}
