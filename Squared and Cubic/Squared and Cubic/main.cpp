//
//  main.cpp
//  Squared and Cubic
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=3;j++){
            printf("%d",a);
            a=a*i;
            if(j!=3) printf(" ");
        }
        printf("\n");
    }
    
    
    return 0;
}
