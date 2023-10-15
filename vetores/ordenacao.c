# include <stdio.h>

int main(){

    int i, n, replace, vetor[100];

    printf("Adicione 100 valores inteiros \n");

    for (i = 0; i < 100; i++){
        printf("Digite o numero %d: \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 100; i++){
        for (n = i + 1; n < 100; n++){
            if (vetor[i] > vetor[n]){
                replace = vetor[i];
                vetor[i] = vetor[n];
                vetor[n] = replace;
            }
        }
    }

    printf("Em ordem crescente ficaria:\n");
    for (i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
