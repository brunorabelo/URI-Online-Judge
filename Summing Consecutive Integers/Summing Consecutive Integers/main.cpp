//
//  main.cpp
//  Summing Consecutive Integers
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,n;
    
    scanf("%d%d",&a,&n);
    while(n<=0) scanf("%d",&n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(a+i);
    }
    printf("%d\n",sum);
    
    return 0;
}
