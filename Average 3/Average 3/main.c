//
//  main.c
//  Average 3
//
//  Created by MacBook on 24/03/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float a,b,c,d;
    
    scanf("%f%f%f%f",&a,&b,&c,&d);
    
    float media = a*2+b*3+c*4+d*1;
    media=media/10.0;
    
    printf("Media: %.1f\n",media);
    
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }else if(media>=5.0){
        printf("Aluno em exame.\n");
        float novo;
        scanf("%f",&novo);
        float mediaNova =(media+novo)/2;
        printf("Nota do exame: %.1f\n",novo);
        if(mediaNova>=5.0){
            printf("Aluno aprovado.\n");
        }else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",mediaNova);
        
    }else printf("Aluno reprovado.\n");
    
    return 0;
}
