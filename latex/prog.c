#include <stdio.h>

int main() {
    char c;
    int open = 1;  // Variável para alternar entre aspas de abertura e fechamento

    // Ler caracteres até o fim do arquivo
    while ((c = getchar()) != EOF) {
        // Se encontrar aspas duplas, decide se são de abertura ou fechamento
        if (c == '"') {
            if (open) {
                printf("``");  // Aspas de abertura
            } else {
                printf("''");  // Aspas de fechamento
            }
            open = !open;  // Alterna o estado para próxima aspa
        } else {
            putchar(c);  // Imprime o caractere normalmente
        }
    }

    return 0;
}