//
//  main.c
//  Dividing X by Y
//
//  Created by MacBook on 25/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,x,y;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(y==0) printf("divisao impossivel\n");
        else{
            printf("%.1f\n",(float)x/(float)y);
        }
    }
    
    
    return 0;
}
