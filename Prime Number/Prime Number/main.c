//
//  main.c
//  Prime Number
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int mdc(int maior,int menor);

int mdc(int maior,int menor){
    
    int resto=maior%menor;
    
    while(resto!=0){
        maior=menor;
        menor=resto;
        resto=maior%menor;
    }
    return menor;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n, number,ehPrimo=1;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        
        ehPrimo=1;
        for(int j=2;j<number;j++){
            if(mdc(number,j)!=1) {
                ehPrimo=0;
                break;
            }
        }
        
        if(ehPrimo&&number!=1&&number!=0) printf("%d eh primo\n",number);
        else printf("%d nao eh primo\n",number);
    }
    
    
    return 0;
}


