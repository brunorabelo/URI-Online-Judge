//
//  main.cpp
//  C Mais ou Menos?
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    char str[7][100]={"suco de laranja","morango fresco", "mamao","goiaba vermelha",
        "manga","laranja","brocolis"};
    
    int quantidade[7]= {120,85,85,70,56,50,34};
    int n,qtd,cod,total=0;
    char name[100];
    char c;
    scanf("%d",&n);
    while(n!=0){
        total=0;
        for(int i=0;i<n;i++){
            scanf("%d",&qtd);
            scanf("%c",&c);
            gets(name);
            
            cod=0;
            for(int j=0;j<7;j++){
                if(!strcmp(str[j], name)){
                    cod=j;
                    break;
                }
            }
            total+=qtd*quantidade[cod];
            
        }
        if(total>130)
            printf("Menos %d mg\n",total-130);
        else if(total<110)
            printf("Mais %d mg\n",110-total);
        else
            printf("%d mg\n",total);
        
        
        scanf("%d",&n);
        
    }
    
    return 0;
}
