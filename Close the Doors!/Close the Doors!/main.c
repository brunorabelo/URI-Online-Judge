//
//  main.c
//  Close the Doors!
//
//  Created by MacBook on 19/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
     int n,div,cont,next;
    
    while(scanf("%d",&n)&&n>0){
        printf("%d",1);
        for(int i=2;i<=n;i++){
            div=1;
            next=i;
            for(int j=2;j<=next;j++) {
                cont=1;
                while(next%j==0){
                    cont++;
                    next/=j;
                }
                div*=cont;
            }
            if(div%2==1)
                printf(" %d",i);
            
            
        }
        
        printf("\n");
        
        
        
    }
    
    
    
    return 0;
}
