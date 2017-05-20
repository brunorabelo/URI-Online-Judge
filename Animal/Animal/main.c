//
//  main.c
//  Animal
//
//  Created by MacBook on 01/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char nomes[3][20];
    char resposta[8][20]={"aguia","pomba","homem","vaca","pulga","lagarta","sanguessuga","minhoca"};
    
    scanf("%s%s%s",&nomes[0][0],&nomes[1][0],&nomes[2][0]);
    int index;
    switch (nomes[0][0]) {
        case 'i':
            switch (nomes[1][0]) {
                case 'i':
                    
                    switch (nomes[2][2]) {
                        case 'm':
                            index=4;
                            break;
                            
                        default:
                            index =5;
                            break;
                    }
                    
                    break;
                    
                default:
                    switch (nomes[2][2]) {
                        case 'm':
                            index=6;
                            break;
                            
                        default:
                            index =7;
                            break;
                    }
                    
                    break;
            }
            
            break;
            
        default:
            switch (nomes[1][0]) {
                case 'a':
                    
                    switch (nomes[2][0]) {
                        case 'c':
                            index=0;
                            break;
                            
                        default:
                            index =1;
                            break;
                    }
                    
                    break;
                    
                default:
                    switch (nomes[2][0]) {
                        case 'o':
                            index=2;
                            break;
                            
                        default:
                            index =3;
                            break;
                    }
                    
                    break;
            }
            
            break;
    }
    
    printf("%s\n",resposta[index]);
    
    
    
    return 0;
}
