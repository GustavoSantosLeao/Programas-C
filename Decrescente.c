#include<stdio.h>

//Programa que pega a entrada de três números inteiros e organiza de forma decrescente. Obs: Não era permitido usar vetor ou estrutura de repetição.

int main(){

    int x,y,z;

    scanf("%d%d%d",&x,&y,&z);

    if(x<y && x<z){
        if(y<z){
            printf("%d\n%d\n%d\n",z,y,x);
        }else{
            printf("%d\n%d\n%d\n",y,z,x);
        }

    }else{
        if(y<x && y<z){
            if(x<z){
                printf("%d\n%d\n%d\n",z,x,y);
        }else{
            printf("%d\n%d\n%d\n",x,z,y);
        }

    }else{
        if(z<x && z<y){
            if(x<y){
                printf("%d\n%d\n%d\n",y,x,z);
                }else{
                    printf("%d\n%d\n%d\n",x,y,z);
                }
            }
        }
    }


    return 0;
}
