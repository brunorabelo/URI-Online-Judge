//
//  main.c
//  PathMusics
//
//  Created by MacBook on 03/04/17.
//  Copyright © 2017 Bruno Botelho. All rights reserved.


#include <dirent.h>
#include <sys/types.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

FILE *saida;

void extrair(char *path) {
    DIR           *d;
    struct dirent *dir;
    d = opendir( path);
    if( d == NULL ) {
        return;
    }
    while( ( dir = readdir( d ) ) ) {
        if( !strcmp( dir->d_name, "." )||
           !strcmp( dir->d_name, ".." )) {
            continue;
        }
        else if( dir->d_type == DT_DIR ) {
            chdir( dir->d_name );
            char cwd[1024];
            if (getcwd(cwd, sizeof(cwd)) != NULL)
                printf("Current working dir: %s\n", cwd);
            else
                perror("getcwd() error");
            extrair(cwd);
            chdir( ".." );
        } else {
            char cwd[1024];
            char filename[255];
            if (getcwd(cwd, sizeof(cwd)) != NULL){
                sprintf(filename, "%s/%s", cwd, dir->d_name);
                printf("Current working dir: %s\n", filename);
                fprintf(saida, "%s\n",filename);
            }
            else
                perror("getcwd() error");
            
//            extrair(cwd);
            
        
            
        }
    }
    closedir( d );
    
}

int main( ) {
    saida= fopen("musicas.txt", "w");
    char path[]= ".";
    extrair(path);
    fclose(saida);
    return 0;
}

