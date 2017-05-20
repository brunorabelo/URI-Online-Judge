//
//  main.c
//  Scientific Notation
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    double a;
    char n[120];
    scanf("%s",n);
    
    sscanf(n, "%lf", &a);
    
    
    if(a>0){
        printf("+%.4E\n",a);
    }
    else if(a<0)
        printf("%.4E\n",a);
    else{
        if(n[0]=='-'||n[0]=='+')
            printf("%.4E\n",a);
        else
            printf("+%.4E\n",a);
        
    }
    return 0;
}
