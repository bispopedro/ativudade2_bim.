#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    
    if (num2 != 0) {
        if (num1 % num2 == 0) {
            printf("%d é múltiplo de %d.\n", num1, num2);
        } else {
            printf("%d não é múltiplo de %d.\n", num1, num2);
        }
    }else {
       printf("Não é possível dividir por zero!\n");
   }

    return 0;}
