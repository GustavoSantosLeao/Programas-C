#include<stdio.h>

int main(){

    int tabuada, x=1;

    scanf("%d",&tabuada);

    while(x<=10){
        printf("%d * %d = %d\n",tabuada,x,tabuada*x);
        x++;
    }
    return 0;
}
