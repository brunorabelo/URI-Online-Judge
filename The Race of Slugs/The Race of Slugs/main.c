//
//  main.c
//  The Race of Slugs
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int level(int speed);
int level(int speed){
    if(speed<10){
        return 1;
    }
    else if(speed>=20){
        return 3;
    }
    else return 2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,faster=-1,speed;
    while(scanf("%d",&n)!=EOF){
        if(scanf("%d",&faster)==EOF)
            return 0;
        for(int i=1;i<n;i++){
            if(scanf("%d",&speed)==EOF) return 0;
            
            if(speed>faster)
                faster=speed;
        }
        
        printf("%d\n",level(faster));
        
    }
    
    
    
    
    return 0;
}
