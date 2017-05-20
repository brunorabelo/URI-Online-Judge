//
//  main.c
//  Array 123
//
//  Created by MacBook on 18/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    
    
    
    
    
    
    while(scanf("%d",&n)!=EOF){
        int coluna1=-1;
        int coluna2=n;
        for(int i=0;i<n;i++){
            coluna1++;
            coluna2--;
            for(int j=0;j<n;j++){
                int numero=3;
                if(j==coluna1&&coluna1==coluna2) numero=2;
                else if(j==coluna1) numero =1;
                else if(j==coluna2) numero =2;
                
                printf("%d",numero);
            }
            printf("\n");
            
            
        }
        
    }
    
    
    return 0;
}
