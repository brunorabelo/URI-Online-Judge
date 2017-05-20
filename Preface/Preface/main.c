//
//  main.c
//  Preface
//
//  Created by MacBook on 07/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int divisor,dividendo,quociente,resto;
    
    scanf("%d%d",&dividendo,&divisor);
    
    quociente=dividendo/divisor;
    
    resto=dividendo-divisor*quociente;
    
    
    if(resto<0){
        resto= abs(divisor)+resto;
        quociente=(dividendo-resto)/divisor;
    }
//    resto=resto>0?resto:divisor+resto;
    
    printf("%d %d\n",quociente,resto);
    
    
    return 0;
}
