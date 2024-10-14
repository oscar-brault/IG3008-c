#include <stdlib.h>
#include <stdio.h>
int mini(int t[], int size) {
    if (size == 0) {
        return -1;  
    }

    int min = t[0];

    for (int i = 1; i < size; i++) {
        if (t[i] < min) {
            min = t[i];
        }
    }

    return min;
}
int main()
{
    int t[100];
    int size = 10;
    for (int i=0; i<size; i++){
        t[i]=rand() % 50 ;
        printf("t[%d] = %d\n", i, t[i]);
    }
    int minValue = mini(t, size);
    printf("La valeur minimale du tableau est : %d\n", minValue);
    return 0;
}
