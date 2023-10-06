#include <stdio.h>

int main() {
    int quantia;

    printf("Digite a quantia solicitada em reais: ");
    scanf("%d", &quantia);

    int notas100 = quantia / 100;
    quantia %= 100;
    
    int notas50 = quantia / 50;
    quantia %= 50;

    int notas20 = quantia / 20;
    quantia %= 20;

    int notas10 = quantia / 10;
    quantia %= 10;

    int notas5 = quantia / 5;
    quantia %= 5;

    int notas2 = quantia / 2;
    quantia %= 2;

    int notas1 = quantia;

    //                                                                                                                                                                                                                        
    if (notas100 > 0 || notas50 > 0 || notas20 > 0 || notas10 > 0 || notas5 > 0 || notas2 > 0 || notas1 > 0) {
        printf("Voce precisara ");
        if (notas100 > 0) {
            printf("%d nota(s) de R$100 ", notas100);
        }
        if (notas50 > 0) {
            if (notas100 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$50 ", notas50);
        }
        if (notas20 > 0) {
            if (notas100 > 0 || notas50 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$20 ", notas20);
        }
        if (notas10 > 0) {
            if (notas100 > 0 || notas50 > 0 || notas20 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$10 ", notas10);
        }
        if (notas5 > 0) {
            if (notas100 > 0 || notas50 > 0 || notas20 > 0 || notas10 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$5 ", notas5);
        }
        if (notas2 > 0) {
            if (notas100 > 0 || notas50 > 0 || notas20 > 0 || notas10 > 0 || notas5 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$2 ", notas2);
        }
        if (notas1 > 0) {
            if (notas100 > 0 || notas50 > 0 || notas20 > 0 || notas10 > 0 || notas5 > 0 || notas2 > 0) {
                printf("mais ");
            }
            printf("%d nota(s) de R$1.", notas1);
        }
        printf("\n");
    } else {
        printf("Nao ha notas a serem distribuidas.\n");
    }

    return 0;
}
