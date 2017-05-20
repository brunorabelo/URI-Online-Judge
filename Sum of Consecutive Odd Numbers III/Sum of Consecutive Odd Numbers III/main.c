//
//  main.c
//  Sum of Consecutive Odd Numbers III
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x,y,n,sum;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        int cont=0;
        sum=0;
        for(int j=x;cont!=y;j++){
            if(j%2!=0) {
                sum+=j;
                cont++;
            }
        }
        
        printf("%d\n",sum);
        
        
    }
    
    
    
    return 0;
}
