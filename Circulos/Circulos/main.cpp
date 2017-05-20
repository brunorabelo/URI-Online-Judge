//
//  main.cpp
//  Circulos
//
//  Created by MacBook on 19/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>
#include <math.h>
int comparar(int matriz[],int matriz2[]);
int comparar(int n1[],int n2[]){
    
    int x1,x2,y1,y2,r1,r2;
    x1=n1[0];
    x2=n2[0];
    y1=n1[1];
    y2=n2[1];
    r1=n1[2];
    r2=n2[2];
    
    double distancia = pow(x1-x2,2)+pow(y1-y2,2);
    distancia = pow(distancia,0.5);
    
    if(distancia<=r1+r2) return 1;
    else{return 0;
    }
    
    
}


int main(int argc, const char * argv[]) {
    
    int n;
    int matriz[1000][3];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&matriz[i][0],&matriz[i][1],&matriz[i][2]);
    }

    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int resultado=  comparar(matriz[i],matriz[j]);
            if(resultado==1){
                printf("%d %d\n",i+1,j+1);
            }
        }
    }
    
    return 0;
}
