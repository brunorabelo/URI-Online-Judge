//
//  main.cpp
//  Even or ODD
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        if(a==0) printf("NULL");
        else {
            if(a%2==0){
                printf("EVEN ");
            }
            else printf("ODD ");
            
            if(a>0) printf("POSITIVE");
            else printf("NEGATIVE");
        }
        printf("\n");
    }
    
    return 0;
}
