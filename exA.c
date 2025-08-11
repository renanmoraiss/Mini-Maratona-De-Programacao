//passou em todos os testes

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int N, H;
    int Hmin;
    int cont = 0;
    scanf("%d", &N);
    scanf("%d", &H);
    //
    if ((N >= 1 && N <= 6 ) && (H >= 90 && H <= 200)) {
        for (int i = 0; i < N; i++) {
            scanf("%d", &Hmin); 
            if (H >= Hmin) {
                cont++;
            }
        }
    } printf("%d\n", cont);
    //
    return 0;
}