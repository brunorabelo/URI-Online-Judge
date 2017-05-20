//
//  main.c
//  Population Increase
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int testeCases,popA,popB;
    double time;
    double gA,gB;
    
    scanf("%d",&testeCases);
    
    for(int i=0;i<testeCases;i++){
        scanf("%d%d%lf%lf",&popA,&popB,&gA,&gB);
        gA=gA/100.00+1;
        gB=gB/100.00+1;
        time=0;
        for(int i=1;i<105&&popB>=popA;i++){
            popA=popA*gA;
            popB=popB*gB;
            time=i;
        }
        if(time>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%.0lf anos.\n",time);
        }
    }
    
    
    
    return 0;
}
