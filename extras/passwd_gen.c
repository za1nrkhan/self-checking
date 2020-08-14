#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int myArray[8];
    time_t t;

    srand((unsigned) time(&t));
    
    for (int i = 0; i<8; i++) {
        myArray[i] = rand() % 52;
        printf("%c", myArray[i]+48);
    }
    printf("\n");
}
