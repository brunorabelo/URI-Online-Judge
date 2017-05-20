//
//  main.c
//  Experiments
//
//  Created by MacBook on 17/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>


int main() {
    int q=0;
    scanf("%d",&q);
    double matriz[3]={0,0,0};
    
    for(int i=0;i<q;i++){
        char u=' ';
        double quantidade=0;
        scanf("%lf %c",&quantidade,&u);
        
        
        switch (u) {
            case 'C':
                matriz[0]+=quantidade;
                break;
            case 'R':
                matriz[1]+=quantidade;
                break;
            case 'S':
                matriz[2]+=quantidade;
                break;
            default:
                break;
        }
        
    }
    
    int total=0;
    int i=0;
    for(i=0;i<3;i++) total+=matriz[i];
    
    total=(total==0)?1:total;
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %.0lf\n",matriz[0]);
    printf("Total de ratos: %.0lf\n",matriz[1]);
    printf("Total de sapos: %.0lf\n",matriz[2]);
    printf("Percentual de coelhos: %.2lf %%\n",matriz[0]*100.00/total);
    printf("Percentual de ratos: %.2lf %%\n",matriz[1]*100.00/total);
    printf("Percentual de sapos: %.2lf %%\n",matriz[2]*100.00/total);
    
    return 0;
}



