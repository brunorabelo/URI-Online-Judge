//
//  main.cpp
//  Diving
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    double sum=0, maior, menor,weight,maior_sum=0,a;
    char nomeMaior[100],nome_temp[100];
    int n;
    
    scanf("%d",&n);
    
    for(int j=0;j<n;j++){
        sum=0;
        scanf("%s",nome_temp);
        scanf("%lf",&weight);
        scanf("%lf",&a);
        maior=a;
        menor=a;
        sum+=a;
        for(int i=1;i<7;i++){
            scanf("%lf",&a);
            if(a>maior)
                maior=a;
            if(a<menor)
                menor=a;
            sum+=a;
        }
        
        sum=sum-menor-maior;
        sum*=weight;
        printf("%s %.2lf\n",nome_temp,sum);
        
        
        
    }
    
    
    return 0;
}
