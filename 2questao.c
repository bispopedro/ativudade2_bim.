#include <stdio.h>


int main(){
	
	int num1, num2, somaa, sube, multil, divi, resto;
	
	printf("Informe o numero inteiro: ");
	scanf("%d", &num1);
	printf("Informe o numero inteiro: ");
	scanf("%d", &num2);
	
	somaa = num1 + num2;
	sube = num1 - num2;
	multil = num1 * num2;
	divi = num1 / num2;
	resto = num1 % num2;
	
	printf("Numero 1 \t Numero 2 \t Operacao \n");
    printf("%d \t \t %d \t \t numero1 + numeo2 = %d \n", num1, num2, somaa);
    printf("%d \t \t %d \t \t numero1 - numeo2 = %d \n", num1, num2, sube);
    printf("%d \t \t %d \t \t numero1 * numeo2 = %d \n", num1, num2, multil);
    printf("%d \t \t %d \t \t numero1 / numeo2 = %d \n", num1, num2, divi);
    printf("%d \t \t %d \t \t numero1 %% numeo2 = %d \n", num1, num2, resto
    );


   
	return 0;
}
