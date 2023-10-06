#include <stdio.h>

int main(){

    int num1, num2, n1, n2, n3, m1, m2, m3;
    printf("Digite 2 numeros entre 0 e 7: \n"); scanf("%d%d", &num1, &num2);

    if (num1 <= 7 && num1 >= 0 && num2 <= 7 && num2 >=0){
        n1 = num1 % 2; num1 /= 2; n2 = num1 % 2, num1 /= 2; n3 = num1 % 2;
        m1 = num2 % 2; num2 /= 2; m2 = num2 % 2, num2 /= 2; m3 = num2 % 2;

        if (n1 == m1 && n2 == m2 && n3 == m3)
            printf("Nao sao potencialmente sequenciais");
        else if (n1 == m1 && n2 == m2 && n3 != m3)
            printf("Sao potencialmente sequenciais");
        else if (n1 == m1 && n2 != m2 && n3 == m3)
            printf("Sao potencialmente sequenciais");
        else if (n1 != m1 && n2 == m2 && n3 == m3)
            printf("Sao potencialmente sequenciais");    
        else if (n1 != m1 && n2 != m2 && n3 == m3)
            printf("Nao sao potencialmente sequenciais");     
        else if (n1 == m1 && n2 != m2 && n3 != m3)
            printf("Nao sao potencialmente sequenciais");     
        else if (n1 != m1 && n2 == m2 && n3 != m3)
            printf("Nao sao potencialmente sequenciais");         
    }else
        printf("Os numeros devem estar entre 0 e 7");

    return 0;
}   