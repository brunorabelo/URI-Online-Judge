//
//  main.c
//  Collectable Cards
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int n, x,y;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        
        scanf("%d%d",&x,&y);
        
        while(x!=0 && y%x!=0){
            
            if(x>y)
                x=x%y;
            else
                y=y%x;
            
        }
        
        x==0?printf("%d\n",y):printf("%d\n",x);
        
        
    }
    
    return 0;
}
