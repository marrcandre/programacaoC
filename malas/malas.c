#include <stdio.h>

int main() {
    int numCasos, altura, largura, profundidade;

    // Leitura do número de caixas
    scanf("%d", &numCasos);

    for (int i = 1; i <= numCasos; i++) {
        // Leitura das dimensões da caixa
        scanf("%d %d %d", &altura, &largura, &profundidade);

        // Verificação se a caixa cabe na mala de 20x20x20
        if (altura <= 20 && largura <= 20 && profundidade <= 20) {
            printf("Caso %d: good\n", i);
        } else {
            printf("Caso %d: bad\n", i);
        }
    }

    return 0;
}