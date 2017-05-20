//
//  main.c
//  Age in Days
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int age;
    scanf("%d",&age);
    int n[]={365,30,1};
    
    int cont[] ={0,0,0};
    
    int temp=age;
    
    for(int i=0;i<3;i++){
        while(temp>=0){
            temp-=n[i];
            cont[i]++;
        }
        temp+=n[i];
        cont[i]--;
    }
    
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",cont[0],cont[1],cont[2]);
    
    return 0;
}
