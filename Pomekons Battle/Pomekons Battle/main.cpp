//
//  main.cpp
//  Pomekons Battle
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int n,bonus,a[2][3];
    double v1,v2;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&bonus);
        for(int j=0;j<2;j++){
            scanf("%d%d%d",&a[j][0],&a[j][1],&a[j][2]);
        }
        
        v1=(a[0][0]+a[0][1])/2.0;
        v2=(a[1][0]+a[1][1])/2.0;
        
        if(a[0][2]%2==0)
            v1+=bonus;
        if(a[1][2]%2==0)
            v2+=bonus;
        
        if(v1>v2)
            printf("Dabriel\n");
        else if(v2>v1)
            printf("Guarte\n");
        else
            printf("Empate\n");
        
        
    }
    
    
    
    
    return 0;
}
