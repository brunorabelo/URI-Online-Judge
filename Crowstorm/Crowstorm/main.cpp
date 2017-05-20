//
//  main.cpp
//  Crowstorm
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x1,y1,x2,y2,v,r1,r2;
    double distance;
    while(scanf("%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&v,&r1,&r2)>0){
        distance=sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
        
        if(r1+r2>=distance+1.5*v)
            printf("Y\n");
        else
            printf("N\n");
        
    }
    
          
          
    
    return 0;
}
