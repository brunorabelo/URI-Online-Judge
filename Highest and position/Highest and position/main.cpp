//
//  main.cpp
//  Highest and position
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,maior,pos=0;
    scanf("%d",&n);
    maior=n;
    for(int i=1;i<100;i++){
        scanf("%d",&n);
        if(n>maior){
            maior=n;
            pos=i+1;
        }
    }
    
    printf("%d\n%d\n",maior,pos);
    
    return 0;
}
