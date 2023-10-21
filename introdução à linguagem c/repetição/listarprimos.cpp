#include <stdio.h>

int main() {
	
    int contador = 0, numero = 2; 

    printf("Os 20 primeiros numeros primos sao:\n");

    while (contador < 20) { 
        int condicao = 1, divisor = 2;

        while (condicao == 1 && divisor <= numero / 2) {
            if (numero % divisor == 0) 
                condicao = 0;
            divisor += 1;
        }

        if (condicao == 1) {
            printf("%d ", numero); 
            contador += 1;
        } 
        numero += 1;
    }

    return 0;
}
