#include <stdio.h>

int main() {
    int termo, vetor[20] = {0};

    for (int i = 1; i < 20; i++) {
    	
        int condicao = 0;
        termo = vetor[i - 1] - i;

        if (termo <= 0)
            termo = vetor[i - 1] + i;
        else if (termo > 0) {
            for (int p = 0; p < i; p++) {
                if (vetor[p] == termo) {
                    condicao = 1;
                    vetor[i] = vetor[i - 1] + i;
                }
            }
        }if (condicao == 0)
            vetor[i] = termo;
    }

    for (int r = 0; r < 20; r++)
        printf("%d ", vetor[r]);	
	return 0;
}

// A sequencia de Recamán é uma sequência, onde seus os termos são dados pela seguinte relação:
// A0 = 0; para n > 0, 
// An = An-1 – n, se o termo for positivo e já não estiver na sequência, 
// An = An-1 + n, caso contrário.

// Escreva um programa em C, que gere e armazene em um vetor de vinte posições, os 20 primeiros termos da série.
// Exemplo da série de Recamán até o nono termo: 0, 1, 3, 6, 2, 7, 13, 20, 12, 21...
