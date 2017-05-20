//
//  main.c
//  Tri-du
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n1,n2;
    
    
    scanf("%d%d",&n1,&n2);
    
    if(n1>n2)
        printf("%d\n",n1);
    else printf("%d\n",n2);
    
    return 0;
}
