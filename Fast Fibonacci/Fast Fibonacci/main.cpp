//
//  main.cpp
//  Fast Fibonacci
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    double result;
    scanf("%d",&n);
    
    result= pow(((1+sqrt(5))/2.0),n)-pow((1-sqrt(5))/2.0, n);
    result/=sqrt(5);
    
    printf("%.1lf\n",result);
    
    
    
    
    
    return 0;
}
