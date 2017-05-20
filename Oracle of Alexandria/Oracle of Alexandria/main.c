//
//  main.c
//  Oracle of Alexandria
//
//  Created by MacBook on 16/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

typedef long long  natural;

#include <stdio.h>
#include <string.h>

//natural recu(int n,int k){
//    
//    if(n<=1)
//        return 1;
//    
//    return n*(n-k)
//    
//}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    natural n,k,result=1;
    char a[25];
    int testes;
    
    scanf("%d",&testes);
    
    for(int j=0;j<testes;j++){
        result=1;
        scanf("%lld%s",&n,a);
        k=strlen(a);
        
        for(int i=0;(n-i*k)>1;i++){
            result*=(n-i*k);
//            printf("result: %lld\n",n-i*k);
        }
        
        printf("%llu\n",result);
    }
    
    
    
    
    return 0;
}
