//
//  main.c
//  Even Numbers
//
//  Created by MacBook on 25/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int i=1;
    
    while (i<=100){
        if(i%2==0) printf("%d\n",i);
        i++;
    }
    
    return 0;
}
