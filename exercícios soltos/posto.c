#include <stdio.h>

int main() {
    float litro, desconto, valor;
    char tipo;

    printf("Digite qual o combustivel e a quantidade de litros: \n");
    scanf("%c %f", &tipo, &litro);

    if (tipo == 'G' && litro <= 25) {
        litro *= 2.70;
        desconto = (litro * 3) / 100;
        valor = litro - desconto;
    } else if (tipo == 'G' && litro > 25){
        litro *= 2.70;
        desconto = (litro * 5) / 100;
        valor = litro - desconto;
    }
    else if (tipo == 'A' && litro <= 25) {
        litro *= 1.90;
        desconto = (litro * 2) / 100;
        valor = litro - desconto;
    } else if (tipo == 'A' && litro > 25) {
        litro *= 1.90;
        desconto = (litro * 2) / 100;
        valor = litro - desconto;
    }
    else {
        printf("Combustivel nao disponivel ou nao existente.\n");
        return 1;
    }

    printf("O valor do seu pedido e: R$%.2f", valor);

    return 0;
}
