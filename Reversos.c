#include<stdio.h>

int main(){

    int reverso, x=0;

    scanf("%d",&reverso);
    printf("De %d a 1:",reverso);

    while(x<reverso){
        printf(" %d",reverso-x);

        x++;

    }
    return 0;
}
