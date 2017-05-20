//
//  main.cpp
//  Galopeira
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int cont, n;
    char a;
    
    scanf("%d",&n);
    scanf("%c",&a);
    for(int i=0;i<n;i++){
        cont=-1;
        do{
            scanf("%c",&a);
            cont++;
        }while(a!='\n');
        
        printf("%.2lf\n",cont*0.01);
        
    }
    
    return 0;
}
