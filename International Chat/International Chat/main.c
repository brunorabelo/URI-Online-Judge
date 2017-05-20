//
//  main.c
//  International Chat
//
//  Created by MacBook on 21/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int cases=0;
    scanf("%d",&cases);
    
    for(int i=0;i<cases;i++){
        int n;
        scanf("%d",&n);
        
        
        char padrao[21];
        scanf("%s",padrao);
        
        int printou=0;
        for(int j=1;j<n;j++){
            char language[21];
            scanf("%s",language);
            if(strcmp(padrao,language)){
                printou=1;

            }
        }
        
        if(!printou) printf("%s\n",padrao);
        else printf("ingles\n");

        
    }
    
    return 0;
}
