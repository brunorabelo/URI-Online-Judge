//
//  main.cpp
//  Sum of Consecutive Even Numbers
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    
    scanf("%d",&x);
    
    while (x!=0) {
        int sum=0;
        x=x%2==0?x:x+1;
        for(int i=0;i<5;i++){
            sum+=x+(2*i);
        }
        printf("%d\n",sum);
        
        scanf("%d",&x);
    }
    
    
    return 0;
}
