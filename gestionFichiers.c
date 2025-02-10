#include <fcntl.h>
#include <unistd.h> 
#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
#include "gestionFichiers.h"
#define t_size 10


char* litDixCaracteres(int descripteur) {
    char* buffer=(char*) malloc(sizeof(char)*t_size) ;
    read(descripteur,buffer,t_size);
    *(buffer+t_size) = '\0';
    return buffer;
}