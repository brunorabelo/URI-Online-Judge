//
//  main.c
//  The Greatest
//
//  Created by MacBook on 23/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(int a,int b);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b;
    
    
    scanf("%d%d",&a,&b);
    
    printf("%.3f\n",((float)a*b)/12.0);
    
    return 0;
}

int maior(int a,int b){
    int maior = ((a+b)+abs(a-b))/2;
    
    
    return maior;
}
