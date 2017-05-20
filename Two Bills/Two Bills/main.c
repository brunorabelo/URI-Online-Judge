//
//  main.c
//  Two Bills
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int preco,pago;
    int notas[] = {2,5,10,20,50,100};
    int possivel;
    
    scanf("%d%d",&preco,&pago);
    while(!(preco==0 && pago==0)){
        possivel = 0;
        
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                if(preco+notas[i]+notas[j]==pago){
                    possivel=1;
                    break;
                }
            }
            if(possivel) break;
        }
        
        
        if(possivel)
            printf("possible\n");
        else
            printf("impossible\n");
        
        
        
        scanf("%d%d",&preco,&pago);
    }
    
    
    return 0;
}
