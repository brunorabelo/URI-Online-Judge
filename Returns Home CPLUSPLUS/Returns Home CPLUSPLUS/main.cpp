//
//  main.c
//  MaratonIME returns home
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int r,columns;
    char matriz[1001][1001];
    scanf("%d %d",&r,&columns);
    
    for(int i=0;i<r;i++){
        scanf("%s",matriz[i]);
    }
    
    int maior_soma=0;
    int temp_soma=0;
    for(int i=0;i<r;i++){
        int cont=0;
        if(i%2==0){
            while(cont<columns){
                char atual =matriz[i][cont++];
                if(atual=='_');
                else if(atual=='.')temp_soma++;
                else if(atual=='L'){
                    if(maior_soma<temp_soma){
                        maior_soma=temp_soma;
                    }
                    temp_soma=0;
                }
            }
        }
        else{
            cont=columns-1;
            while(cont>=0){
                char atual =matriz[i][cont--];
                if(atual=='_');
                else if(atual=='.')temp_soma++;
                else if(atual=='L'){
                    if(maior_soma<temp_soma){
                        maior_soma=temp_soma;
                    }
                    temp_soma=0;
                }
            }
            
        }
        
        
    }
    if(maior_soma<temp_soma){
        maior_soma=temp_soma;
    }
    
    printf("%d\n",maior_soma);
    
    
    
    
    return 0;
}
