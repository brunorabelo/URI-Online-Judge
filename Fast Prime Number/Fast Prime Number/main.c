//
//  main.c
//  Fast Prime Number
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    long long unsigned int n, number,primo=1;
    long double sqrt;
    scanf("%llu",&n);
    
    for(int i=0;i<n;i++){
        primo=1;
        scanf("%llu",&number);
        sqrt = sqrtl(number);
        if(number>1){
            for(int i=2;i<sqrt+10&&i<number;i++){
                
                
                if(number%i==0){
                    primo=0;
                    break;
                }
                
            }
        }else{
            if(number==1)
                primo=0;
        }
        
        
        primo?printf("Prime\n"):printf("Not Prime\n");
        
        
        
        
    }
    
    
    
    return 0;
}
