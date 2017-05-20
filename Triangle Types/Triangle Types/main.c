//
//  main.c
//  Triangle Types
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

void ordenar(double *p, int lenght);
void ordenar(double *p, int lenght){
    for(int i=0;i<lenght;i++){
        for(int j=lenght-1;j>=i;j--){
           double temp2 = p[j];
            if(p[i]>p[j]){
                double temp = p[i];
                p[i] = p[j];
                p[j] =temp;
            }
        }
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    double matriz[3];
    for(int i=0;i<3;i++){
        scanf("%lf",matriz+i);
    }
    ordenar(matriz, 3);
//    printf("Ordenado: \n");
//    for(int i=0;i<3;i++){
//        printf("%lf ",*(matriz+i));
//    }
//    

    
    if(matriz[2]>=matriz[1]+matriz[0]) {
        printf("NAO FORMA TRIANGULO\n");
    }else if(matriz[2]*matriz[2]==matriz[1]*matriz[1]+matriz[0]*matriz[0]){
        printf("TRIANGULO RETANGULO\n");
    }else if(matriz[2]*matriz[2]>matriz[1]*matriz[1]+matriz[0]*matriz[0]){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(matriz[2]*matriz[2]<matriz[1]*matriz[1]+matriz[0]*matriz[0]){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if((matriz[0]==matriz[1])&&(matriz[0]==matriz[2])) printf("TRIANGULO EQUILATERO\n");
    else if (matriz[1]==matriz[2]||matriz[0]==matriz[1]) printf("TRIANGULO ISOSCELES\n");
    
    
    return 0;
}
