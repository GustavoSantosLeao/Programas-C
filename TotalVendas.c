#include<stdio.h>

int main(){

    int produto1, produto2;
    float valor1, valor2, desconto;

    scanf("%d%f%d%f%f", &produto1, &valor1, &produto2, &valor2, &desconto);

    printf("Total sem desconto: %.2f\n",(produto1*valor1)+(produto2*valor2));
    printf("Total com desconto: %.2f",(produto1*valor1)+(produto2*valor2)-((produto1*valor1)+(produto2*valor2))*desconto/100);


    return 0;
}
