//
//  main.c
//  Salary Increase
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int limites[]={0,400,800,1200,2000};
    int increase[5]={15,12,10,7,4};
    float salary;
    int intervalo=0;
    scanf("%f",&salary);
    
    for(int i=1;i<5;i++){
        if(salary>limites[i]) intervalo++;
        else break;
    }
    
    
    printf("Novo salario: %.2f\n",salary*(1+increase[intervalo]/100.00));
    printf("Reajuste ganho: %.2f\n",salary*(increase[intervalo]/100.00));
    printf("Em percentual: %d %%\n",increase[intervalo]);
    
    
    
    return 0;
}
