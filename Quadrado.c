#include<stdio.h>

int main(){

    int potencia, x=2;

    scanf("%d",&potencia);

    while(x<=potencia){
        printf("%d^2 = %d\n",x,x*x);
        x+=2;
    }

    return 0;
}
