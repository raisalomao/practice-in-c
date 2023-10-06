#include <stdio.h>

int main(){

    int num, n1, n2, n3, n4, n5, paridade, novonum;
    printf("Digite um inteiro entre 0 e 31:\n");
    scanf("%d", &num);

    if (num <= 31 && num >= 0){
        
        int numero = num;

        n1 = num % 2; num /= 2; n2 = num % 2; num /= 2; n3 = num % 2; num /= 2;
        n4 = num % 2; num /= 2; n5 = num % 2;

        if ((n1 + n2 + n3 + n4 + n5) % 2 == 1){
            paridade = 1;
            novonum = (numero * 2) + 1;
        }
        else{
            paridade = 0;
            novonum = numero * 2;
        }
        printf("O novo numero seria de paridade %d logo o valor e %d", paridade, novonum);
    }else
        printf("O numero esta fora do intervalo estabelecido.");

    return 0;
}