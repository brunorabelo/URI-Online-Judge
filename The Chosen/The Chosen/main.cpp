//
//  main.cpp
//  The Chosen
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, code,max_code;
    double max_grade,grade;
    scanf("%d",&n);
    
    scanf("%d%lf",&max_code,&max_grade);
    for(int i=1;i<n;i++){
        
        scanf("%d%lf",&code,&grade);
        if(grade>max_grade){
            max_grade=grade;
            max_code=code;
        }
    }
    
    if(max_grade>=8.0)
        printf("%d\n",max_code);
    else{
        printf("Minimum note not reached\n");
    }
    
    return 0;
}
