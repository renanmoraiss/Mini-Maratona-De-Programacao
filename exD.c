#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int vet[8];
    int cont = 1;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 8 && cont != 0; i++) {
        if (vet[i] == 9) {
            cont = 0;
        }
    }
    if (cont == 1) {
        printf("S\n");
    } else if (cont == 0) {
        printf("F\n");
    }
    //
    return 0;
}