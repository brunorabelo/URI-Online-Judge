//
//  main.cpp
//  Weighted Averages
//
//  Created by MacBook on 31/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        float a,b,c;
        scanf("%f%f%f",&a,&b,&c);
        float media=2*a+3*b+5*c;
        media=media/10.0;
        printf("%.1f\n",media);
    }
    return 0;
}
