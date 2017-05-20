//
//  main.c
//  Several Scores with Validation
//
//  Created by MacBook on 04/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a=1;
    
//    scanf("%d",&a);
    
    do{
        
        double n1=-1,n2=-1;
        scanf("%lf",&n1);
        
        while(n1<0 || n1>10){
            printf("nota invalida\n");
            scanf("%lf",&n1);
        }
        
        scanf("%lf",&n2);
        while(n2<0 || n2>10){
            printf("nota invalida\n");
            scanf("%lf",&n2);
        }
        
        double media = n1+n2;
        media/=2;
        
        printf("media = %.2lf\n",media);
        
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&a);
        }while(a!=1&&a!=2);
        
        
    }while(a!=2);
    
    
    return 0;
}
