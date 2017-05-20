//
//  main.cpp
//  Name at Form
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int cont=-1;
    char a;
    
    while(scanf("%c",&a)>0)
        cont++;
    if(cont<=80)
        printf("YES\n");
    else printf("NO\n");
    
    return 0;
}
