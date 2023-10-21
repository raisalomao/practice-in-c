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