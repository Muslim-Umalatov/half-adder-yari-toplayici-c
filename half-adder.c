#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* 
 *     File: half-adder.c
 *   Author: Muslim Umalatov
 *  Purpose: Yari-Toplayici'nin C dilinde calisma prensibi gostermek
 */

int main(int argc, char *argv[]){
    int x;  /* first variable */
    int y;  /* second variable */
    int S;  /* sum */
    int C;  /* carry */

    printf("\tYari-Toplayici | Half-Adder\n");
    printf("Lutfen x ve y degerleri giriniz (0/1)\n");

    printf("x: ");
    scanf("%d", &x);

    if (x != 0 && x != 1){
        printf("Yanlis deger girdiniz!\n"); /* Kontrol ediliyor */
        exit(EXIT_FAILURE);
    }

    printf("y: ");
    scanf("%d", &y);

    if (y != 0 && y != 1){
        printf("Yanlis deger girdiniz!\n"); /* Kontrol ediliyor */
        exit(EXIT_FAILURE);
    }

    /* Hesaplama */
    S = x ^ y;
    C = x & y;

    /* Yazdirma */
    printf("S: %d\n", S);
    printf("C: %d\n", C);

    return 0;
}