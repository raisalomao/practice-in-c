#include <stdio.h>

int main(){

    int ataque1, ataque2, ataque3;
    printf("Informe o valores de 3 ataques: \n"); 
    scanf("%d%d%d", &ataque1, &ataque2, &ataque3);

    if (ataque1 == 0 || ataque2 == 0 || ataque3 == 0)
        printf("O inimigo nao foi derrotado");
    else if ((ataque1 > 10 || ataque2 > 10 || ataque3 > 10) && 
             (ataque1 % 2 == 0 || ataque2 % 2 == 0 || ataque3 % 2 == 0))
        printf("O inimigo foi derrotado");
    else
        printf("O inimigo nao foi derrotado");

    return 0;

}
