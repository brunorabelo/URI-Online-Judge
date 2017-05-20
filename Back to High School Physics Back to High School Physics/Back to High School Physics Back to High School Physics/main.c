//
//  main.c
//  Back to High School Physics Back to High School Physics
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int v,t;
    float a,d;
    
    while(scanf("%d%d",&v,&t)>0){
        if(t!=0)
            a=(float)v/(float)t;
        else
            a=0;
        
        d=a*2*t*t;
        
        printf("%.0f\n",d);
        
    }
    
    
    
    
    
    
    
    return 0;
}
