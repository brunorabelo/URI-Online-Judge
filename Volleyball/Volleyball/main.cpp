//
//  main.cpp
//  Volleyball
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,s,b,a,s1,b1,a1,totalS=0,totalB=0,totalA=0,sucS=0,sucB=0,SucA=0;
    char str[100];
    scanf("%d",&n);
    
    
    
    for(int i=0;i<n;i++){
        
        scanf("%s",str);
        
        scanf("%d%d%d%d%d%d",&s,&b,&a,&s1,&b1,&a1);
        
        totalS+=s;
        totalA+=a;
        totalB+=b;
        
        SucA+=a1;
        sucB+=b1;
        sucS+=s1;
    }
    
    printf("Pontos de Saque: %.2lf %%.\n",100*(double)sucS/(double)totalS);
    printf("Pontos de Bloqueio: %.2lf %%.\n",100*(double)sucB/(double)totalB);
    printf("Pontos de Ataque: %.2lf %%.\n",100*(double)SucA/(double)totalA);
    
    
    
    return 0;
}
