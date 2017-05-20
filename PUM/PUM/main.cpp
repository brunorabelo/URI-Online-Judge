//
//  main.cpp
//  PUM
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int lines;
    scanf("%d",&lines);
    int cont=0;
    for(int i=0;i<lines;i++){
        for(int j=0;j<4;j++){
            ++cont%4==0?printf("PUM\n"):printf("%d ",cont);
        }
    }
    
    return 0;
}
