#include <stdio.h>

#define RED     "\033[41m"
#define WHITE   "\033[47m"
#define BLUE    "\033[44m"
#define RESET   "\033[0m"

int main() {
    int linhas = 13;
    int colunas = 40;
    int canton_linhas = 7;
    int canton_colunas = 16;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Canton azul (canto superior esquerdo)
            if (i < canton_linhas && j < canton_colunas) {
                printf(BLUE);
                // Estrelas brancas em padrão alternado
                if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0)) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            // Listras vermelhas e brancas
            else {
                if (i % 2 == 0)
                    printf(RED " " RESET);
                else
                    printf(WHITE " " RESET);
            }
            printf(RESET);
        }
        printf("\n");
    }
    printf(RESET);
    return 0;
}