//passou em todos os testes

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int aberto = 0;
    int coracao = 0;
    int tamanhoString;
    //
    char string[1100];
    //
    scanf("%d", &n); 
    if (n >= 1 && n <= 10000) {
        for (int i = 0; i < n; i++) {
            scanf("%s", string);
            tamanhoString = strlen(string);
            //
            for (int j = 0; j < tamanhoString; j++) {
                if (string[j] == 'S') {
                    aberto++;
                }
                if (string[j] == '2' && aberto > 0) {
                    coracao++;
                    aberto--;
                }
            }
            printf("%d\n", coracao);
            coracao = 0;
            aberto = 0;
        }
    } 
    //
    return 0;
}