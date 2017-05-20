//
//  main.c
//  Blobs
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        float food;
        scanf("%f",&food);
        int days=1;
        float teste=food;
        while((teste=teste/2)>1){
            days++;
        }
        
        
        printf("%d dias\n",days);
        
        
    }
    
    
    return 0;
}

