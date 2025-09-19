#include <stdio.h>

#define RED     "\033[41m"
#define ORANGE  "\033[48;5;208m"
#define YELLOW  "\033[43m"
#define GREEN   "\033[42m"
#define BLUE    "\033[44m"
#define PURPLE  "\033[45m"
#define RESET   "\033[0m"

int main() {
    int linhas = 12;
    int colunas = 48;
    int faixa = linhas / 6;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i < faixa)
                printf(RED " " RESET);
            else if (i < faixa * 2)
                printf(ORANGE " " RESET);
            else if (i < faixa * 3)
                printf(YELLOW " " RESET);
            else if (i < faixa * 4)
                printf(GREEN " " RESET);
            else if (i < faixa * 5)
                printf(BLUE " " RESET);
            else
                printf(PURPLE " " RESET);
        }
        printf("\n");
    }
    printf(RESET);
    return 0;
}