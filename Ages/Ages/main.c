//
//  main.c
//  Ages
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int age;
    double sum=0;
    int n=0;
    do{
        scanf("%d",&age);
        if(age<0)break;
        sum+=age;
        n++;
    }while(age>0);
    
    printf("%.2lf\n",((double)(sum/(double)n)));
    
    return 0;
}
