//
//  main.c
//  Average is not Fast Enough!
//
//  Created by MacBook on 13/05/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int sections,h,m,s,continua=1,team;
    long long int resultM;
    double resultS;
    double distance,resposta=0.0;
    int eliminado=0;
    char atoa;
    char restanteLinha[200];
    
    while(scanf("%d%lf",&sections,&distance)>0&&continua){
        
        while(scanf("%d",&team)>0){
            eliminado=0;
            resposta=0.0;
            for(int i=0;i<sections;i++){
                if(scanf("%d%c%d%c%d",&h,&atoa,&m,&atoa,&s)>0){
                    resposta+=((h*60+m+s/60.0)/distance);
                }
                else{
//                    for(int j=0;j<7;j++)
//                        scanf(" %c",&atoa);
                    scanf("%s",restanteLinha);
                    eliminado=1;
                }
            }
            resultM=(int)resposta;
            resultS=(resposta-(int)resposta)*60;
            if((int)(resultS*10)>=595)
                resultS=0,resultM++;
            if(!eliminado)
                printf("%3d: %llu:%02.0lf min/km\n",team,resultM,resultS);
            else
                printf("%3d: -\n",team);
        }
    
        
        
        
    }
    
    
    
    
    return 0;
}
