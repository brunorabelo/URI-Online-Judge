//
//  main.c
//  Above the Main Diagonal
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float n;
    char o;
    scanf("%c",&o);
    int cont=0;
    float result=0.0;
    
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&n);
            if(j>i && j+i>=12){
                cont++;
                result+=n;
            }
            
        }
        
        
    }
    
    if(o=='M')
        result/=cont;
    
    printf("%.1f\n",result);
    
    
    return 0;
}
