//
//  main.c
//  Bhaskaras Formula
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    float a,b,c;
    
    scanf("%f%f%f",&a,&b,&c);
    float delta = b*b-4*a*c;
    if(delta<0 ||a==0) printf("Impossivel calcular\n");
    else{
        float r1 = (-b+sqrt(delta))/(2.0*a);
        float r2 = (-b-sqrt(delta))/(2.0*a);
        
        printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
    }
    return 0;
}
