//
//  main.c
//  Above Average
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n,*p,alunos,cont;
    
    double media=0;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        media=0;
        cont=0;
        scanf("%d",&alunos);
        p = (int *) malloc(sizeof(int)*alunos);
        for(int j=0;j<alunos;j++){
            scanf("%d",p+j);
            media+=p[j];
        }
        
        media/=alunos;
        
        for(int k=0;k<alunos;k++){
            p[k]>media?cont++:1;
        }
        
        printf("%.3lf%%\n",cont*100.0/(double)alunos);
        
        
        
        
        
        free(p);
        
        
    }
    
    return 0;
}
