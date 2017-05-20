//
//  main.c
//  Extremely Basic
//
//  Created by MacBook on 21/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double a,b;
    scanf("%lf %lf",&a,&b);
    
    int x,y;
    x= (a*10);
    y= (b*10);
    
    double result = ((double) a*3.5 + (double) b *7.5)/11;
    
    
    
    
    printf("MEDIA = %.5lf\n",result);
    
    
    return 0;
}
