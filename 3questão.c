#include <stdio.h>


int main(){
    int numero;
    printf("informe um numero inteiro:");
    scanf("%d",&numero);
    
    if(numero%2==0){
        printf("%d é um numero par,\n",numero);
         }else{printf("%d e um numero impar\n",numero);}
         return 0;
}
