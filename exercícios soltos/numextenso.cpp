#include <stdio.h>

void convertDezANove(int numero) {
    switch(numero) {
        case 10: printf("Dez"); break;
        case 11: printf("Onze"); break;
        case 12: printf("Doze"); break;
        case 13: printf("Treze"); break;
        case 14: printf("Quatorze"); break;
        case 15: printf("Quinze"); break;
        case 16: printf("Dezesseis"); break;
        case 17: printf("Dezessete"); break;
        case 18: printf("Dezoito"); break;
        case 19: printf("Dezenove"); break;
    }
}

void convertDezAVinte(int numero) {
    switch(numero) {
        case 20: printf("Vinte"); break;
        case 30: printf("Trinta"); break;
        case 40: printf("Quarenta"); break;
        case 50: printf("Cinquenta"); break;
        case 60: printf("Sessenta"); break;
        case 70: printf("Setenta"); break;
        case 80: printf("Oitenta"); break;
        case 90: printf("Noventa"); break;
    }
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 19) {
        convertDezANove(numero);
    } else if (numero >= 20 && numero <= 90 && numero % 10 == 0) {
        convertDezAVinte(numero);
    } else if (numero >= 20 && numero <= 99) {
        int dezena = (numero / 10) * 10;
        int unidade = numero % 10;

        convertDezAVinte(dezena);

        if (unidade != 0) {
            printf(" e ");
            switch(unidade) {
                case 1: printf("Um"); break;
                case 2: printf("Dois"); break;
                case 3: printf("Tres"); break;
                case 4: printf("Quatro"); break;
                case 5: printf("Cinco"); break;
                case 6: printf("Seis"); break;
                case 7: printf("Sete"); break;
                case 8: printf("Oito"); break;
                case 9: printf("Nove"); break;
            }
        }
    }

    return 0;
}