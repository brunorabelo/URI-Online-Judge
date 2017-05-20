//
//  main.c
//  Closing Tabs
//
//  Created by MacBook on 09/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int initial,number,abriu_ad=0;
    
    char acao[2][20]={"fechou","clicou"};
    char atual[20];
    scanf("%d%d",&initial,&number);
    
    for(int i=0;i<number;i++){
        scanf("%s",atual);
        
        if(!strcmp(acao[0], atual)){
           if(!abriu_ad) initial=initial+1;
           else initial--;
        }else{
//            abriu_ad=1;
            initial--;
        }
        
    }
    
    printf("%d\n",initial);
    
    
    return 0;
}
