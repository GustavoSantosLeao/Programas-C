#include<stdio.h>

int main(){

    int impar,x=0;

    scanf("%d",&impar);

    while(x<=impar){
        if(x%2==1){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;

}
