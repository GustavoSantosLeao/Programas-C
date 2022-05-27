#include<stdio.h>

int main(){

    char nomeUsuario[80];

    scanf("%[^\n]s", nomeUsuario);
    printf("Ola, %s. Seja bem-vindo(a).\n",nomeUsuario);

    return 0;
}
