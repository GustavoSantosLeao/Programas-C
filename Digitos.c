#include<stdio.h>

int main(){

    int num, x=1, result=0;

    scanf("%d",&num);

    while(num/x!=0){
        result++;
        x=x*10;

    }
    printf("Digitos: %d",result);
    return 0;
}
