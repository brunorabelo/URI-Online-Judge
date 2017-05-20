//
//  main.cpp
//  The Return of Radar
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    long long int n,a;
    
    do{
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
            scanf("%lld",&a);
            if(a==0){
                n=0;
                break;
            }
            else if(a%2!=0)
                printf("%lld\n",2*a-1);
            else
                printf("%lld\n",2*a-2);
        }
        
        
    }while(n!=0);
    
    
    
    
    return 0;
}
