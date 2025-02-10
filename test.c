#include <fcntl.h>
#include <unistd.h> 
#include <stdlib.h> 
#include <string.h> 
#include "gestionFichiers.h"
#include <stdio.h>

int main (){
    int fd = open("./gestionFichiers.txt", O_RDONLY);
    char* c=litDixCaracteres(fd);
    printf("%s\n", c);

}