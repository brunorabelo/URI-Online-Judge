//
//  main.c
//  Electrical Outlet
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,result=0;
    for(int i=0;i<4;i++){
//        result=0;
        scanf("%d",&n);
        result+=n;
    }
    
    printf("%d\n",result-3);
    
    
    return 0;
}
