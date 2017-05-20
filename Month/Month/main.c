//
//  main.c
//  Month
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char mes[][15]={"January","February","March","April","May","June"
        ,"July","August","September","October","November","December"};
    
    int n;
    scanf("%d",&n);
    
    printf("%s\n",mes[n-1]);
    
    
    return 0;
}
