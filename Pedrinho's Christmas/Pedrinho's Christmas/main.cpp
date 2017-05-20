//
//  main.cpp
//  Pedrinho's Christmas
//
//  Created by MacBook on 02/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int d,m,dias;
    
    while(scanf("%d%d",&m,&d)>0){
        dias=25-d;
        
        if(m==12){
            
        }else{
            while(m<12){
                if((m%2!=0&&m<=7) || (m%2==0&&m>7)){
                    m++;
                    dias+=31;
                }
                else if(m==2){
                    m++;
                    dias+=29;
                }
                else{
                    m++;
                    dias+=30;
                }
            }
        }
        
        if(dias>1){
            printf("Faltam %d dias para o natal!\n",dias);
        }else if(dias==1){
            printf("E vespera de natal!\n");
        }
        else if(dias==0){
            printf("E natal!\n");
        }
        else{
            printf("Ja passou!\n");
        }
        
        
    }
    
    
    return 0;
}
