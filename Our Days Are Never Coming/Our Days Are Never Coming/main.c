//
//  main.c
//  Our Days Are Never Coming
//
//  Created by MacBook on 08/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char frase[]={"LIFE IS NOT A PROBLEM TO BE SOLVED\n"};
    int n;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("%c",frase[i]);
    }
    printf("\n");
    
    return 0;
}
