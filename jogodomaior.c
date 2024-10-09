#include <stdio.h>

int main() {
    int rodadas, i, v1, v2, aux1, aux2;

    while (1) {
        scanf("%d", &rodadas);

        if (rodadas == 0) {
            break; // Encerra o programa se rodadas for 0
        }

        aux1 = 0; // Reiniciar contadores para cada partida
        aux2 = 0;

        for (i = 0; i < rodadas; i++) {
            scanf("%d %d", &v1, &v2);
            if (v1 >= 0 && v1 <= 10 && v2 >= 0 && v2 <= 10) { //  se o if for só uma instrução nao precisa colocar chaves
                if (v1 > v2) {
                    aux1++; // Primeiro jogador ganha
                } else if (v1 < v2) {
                    aux2++; // Segundo jogador ganha
                }
                // Se v1 == v2, ninguém ganha ponto
            }
        }

        printf("%d %d\n", aux1, aux2); // Imprimir resultados após cada partida
    }

    return 0;
}
