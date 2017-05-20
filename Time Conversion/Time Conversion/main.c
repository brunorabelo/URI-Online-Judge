//
//  main.c
//  Time Conversion
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int number;
    
    scanf("%d",&number);
    
    int matriz[] = {3600,60,1};
    
    int temp = number;
    int cont[] = {0,0,0};
    
    
    for(int i=0;i<3;i++){
        while(temp>0){
            temp-=matriz[i];
            cont[i]++;
        }
        cont[i]--;
        temp+=matriz[i];
    }
    printf("%d:%d:%d\n",cont[0],cont[1],++cont[2]);
    
    return 0;
}
