#include<stdio.h>

int main(){

    int x, y;

    scanf("%d%d", &x,&y);

    printf("Soma: %d\n", x+y);
    printf("Subtracao: %d\n", x-y);
    printf("Multiplicacao: %d\n", x*y);
    printf("Divisao: %.2f\n", (float)x/y);

    return 0;

}
