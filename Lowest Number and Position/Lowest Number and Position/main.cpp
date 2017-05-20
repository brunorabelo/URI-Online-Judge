//
//  main.cpp
//  Lowest Number and Position
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, a, menor,cont=0;
    
    scanf("%d",&n);
    
    if(n>0) {scanf("%d",&menor);
        
        for(int i=0;i<n-1;i++){
            scanf("%d",&a);
            if(menor>a){
                menor=a;
                cont=i+1;
                
            }
            
        }
        printf("Menor valor: %d\n",menor);
        printf("Posicao: %d\n",cont);
        
    }
    
    
    return 0;
}
