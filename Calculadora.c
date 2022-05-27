#include<stdio.h>

//Programa que aceita entrada de dois números inteiros. Após isso faz a soma, subtração, multiplicação e divisão entre os dois números digitados.

int main(){

    int x, y;

    scanf("%d%d", &x,&y);

    printf("Soma: %d\n", x+y);
    printf("Subtracao: %d\n", x-y);
    printf("Multiplicacao: %d\n", x*y);
    printf("Divisao: %.2f\n", (float)x/y);

    return 0;

}
