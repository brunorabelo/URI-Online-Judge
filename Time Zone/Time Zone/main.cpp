//
//  main.cpp
//  Time Zone
//
//  Created by MacBook on 01/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int zone,partida,tempo,result;
    
    scanf("%d%d%d",&partida,&tempo,&zone);
    
    result = partida+tempo+zone;
    if(result<0)
        result+=24;
    else if(result>=24)
        result=result-24;
    
    printf("%d\n",result);
    
    return 0;
}
