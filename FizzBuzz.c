#include<stdio.h>

/*Programa feito para avaliação, sem usar estrutura de repetição, na qual o usuário digite um número entre 1 e 99.
 caso tenha o digito 3 imprima "Fizz" e caso tenha o dígito 5 imprima "Buzz". Caso tenha 3 e 5 imprima "FizzBuzz".
 se nenhum dos casos se encaixa, imprima o próprio número digitado*/
 
int main(){
	
	int x;
	
	scanf("%d",&x);
	
	if(x<100 && x>0){
		switch(x){
			case 3:
			case 13:
			case 23:
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 36:
			case 37:
			case 38:
			case 39:
			case 43:
			case 63:
			case 73:
			case 83:
			case 93:
				printf("Fizz");
				break;
			case 5:
			case 15:
			case 25:
			case 45:
			case 50:
			case 51:
			case 52:
			case 54:
			case 55:
			case 56:
			case 57:
			case 58:
			case 59:
			case 65:
			case 75:
			case 85:
			case 95:
				printf("Buzz");
				break;
			case 35:
			case 53:
				printf("FizzBuzz");
				break;
			default:
				printf("%d",x);
		}
		
	}else{
		printf("Numero nao se encontra entre 1 e 99");
	}
	
	return 0;
}
