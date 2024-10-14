#include <stdlib.h>
#include <stdio.h>
int main()
{
    int t[100];
    int size = 10;
    for (int i=0; i<size; i++){
        t[i]=rand() % 50 ;
        printf("t[%d] = %d\n", i, t[i]);
    }
    return 0;
}