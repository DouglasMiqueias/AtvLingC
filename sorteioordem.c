#include <stdio.h>

int main() {
    int n, ingresso, i, ganhador;
    int teste = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break; 
        }

        teste++;
        ganhador = -1; 

        for (i = 1; i <= n; i++) { 
            scanf("%d", &ingresso);
            if (ingresso == i) { 
                ganhador = ingresso; 
            }
        }

        printf("Teste %d\n", teste);
        printf("%d\n\n", ganhador);
    }

    return 0;
}
