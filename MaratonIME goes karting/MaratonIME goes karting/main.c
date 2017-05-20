//
//  main.c
//  MaratonIME goes karting
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    unsigned long int *skills;
    scanf("%d",&n);
    
    skills=(unsigned long int*)malloc(n*sizeof(unsigned long int));
    
    for(int i=0;i<n;i++){
        scanf("%ld",skills+i);
    }
    unsigned long int maior=skills[0];
    int pos_maior=0;
    int q=0;
    for(int i=0;i<n-1;i++){
        if(maior<=skills[i+1]){
            if(maior==skills[i+1]) q++;
            else{
                q=1;
                maior=skills[i+1];
                pos_maior=i+1;
            }
        }
    }
    if(q>1) printf("-1\n");
    else printf("%d\n",pos_maior+1);

    
    
    return 0;
}
