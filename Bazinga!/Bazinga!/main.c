//
//  main.c
//  Bazinga!
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    char w1[20],w2[20];
    
    
    char dic[5][20]={"pedra","papel","tesoura","lagarto","Spock"};
    
    
    int index_ganha[5][2]={{2,3},{0,4},{1,3},{4,1},{0,2}};
    
    
    
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%s%s",w1,w2);
        
        int index1=-1;
        
        for(int j=0;j<5;j++){
            if(!strcmp(w1, dic[j])){
                index1=j;
                break;
            }
        }
        int index2=-1;
        
        for(int j=0;j<5;j++){
            if(!strcmp(w2, dic[j])){
                index2=j;
                break;
            }
        }
        
        if(index2==index1)
            printf("Caso #%d: De novo!\n",i+1);
        else if(index_ganha[index1][0]==index2||index_ganha[index1][1]==index2)
            printf("Caso #%d: Bazinga!\n",i+1);
        else
            printf("Caso #%d: Raj trapaceou!\n",i+1);
        
        
    }
    
    
    return 0;
}
