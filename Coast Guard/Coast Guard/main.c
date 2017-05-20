//
//  main.c
//  Coast Guard
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int vf,vg,d;
    
    while(scanf("%d%d%d",&d,&vf,&vg)>0){
        
        if(sqrt(12*12+d*d)/(double)vg>12.0/(double)vf){
            
            printf("N\n");
            
        }
        else
            printf("S\n");
        
        
        
    }
    
    
    
    
    return 0;
}
