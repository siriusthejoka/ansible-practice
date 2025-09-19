#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Necessário para a função abs()

#define GREEN   "\033[42m"
#define YELLOW  "\033[43m"
#define BLUE    "\033[44m"
#define WHITE   "\033[47m"
#define RESET   "\033[0m"

int main() {
    int i, j;
    int size = 15;
    int center = size;
    int height = size;

    for (i = 0; i < height; i++) {
        for (j = 0; j < size * 2; j++) {
            // Fundo verde
            printf(GREEN);

            // Losango amarelo (equação de losango centralizado)
            int dx = j - center;
            int dy = i - height / 2;
            if (abs(dx) + abs(dy) < size / 1.2) {
                printf(YELLOW);
            }

            // Círculo azul
            if ((dx * dx + dy * dy) < (size / 2) * (size / 2)) {
                printf(BLUE);
            }

            // Faixa branca (simplificada)
            if (abs(dy) < 1 && (dx * dx + dy * dy) < (size / 2) * (size / 2)) {
                printf(WHITE);
            }

            printf(" ");
            printf(RESET);
        }
        printf("\n");
    }
    printf(RESET);
    return 0;
}