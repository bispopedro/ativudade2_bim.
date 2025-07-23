include <stdio.h>


int main(){
    int nume;
    printf("informe um numero inteiro:");
    scanf("%d",&nume);
    
    if(nume%2==0){
        printf("%d é um numero par,\n",nume);
         }else{ printf("%d e um numero impar\n",nume);}
return 0;
    
}
