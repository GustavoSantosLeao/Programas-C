#include <stdio.h>
//Equipe: Gustavo dos Santos, Bernardo Ruas, Samuel de Abreu, Luigi Eliabe

int main (){
	
	float salario, imposto, f2, f3, f4, f5;
	
	printf("insira o valor do seu salario: ");
	scanf("%f",&salario);
	
	if(salario<=1903.98){
		printf("Salario: %.2f\nImposto: Insento",salario);  //Primeira Faixa
		
	}else{
		
		if(salario<=2826.65){
			

			f2=(salario-1903.98)*7.5/100;
			
			imposto=f2;
			
			printf("Salario: %.2f\nFaixa 1= 0,00\nFaixa 2= %.2f\nImposto Total: %.2f",salario,f2,imposto);     //Segunda Faixa
			
		}else{
			
			if(salario<=3751.05){
				
				
				f2=922.67*7.5/100;
				
				f3=((salario-2826.65)*15/100);
				
				imposto=f2+f3;
				
				printf("Salario: %.2f\nFaixa 1= 0,00\nFaixa 2= %.2f\nFaixa 3= %.2f\nImposto Total: %.2f",salario,f2,f3,imposto);   //Terceira Faixa
			
			}else{
			
				if(salario<=4664.68){
					
					f2=922.67*7.5/100;
				
					f3=924.40*15/100;
					
					f4=((salario-3751.05)*22.5/100);
					
					imposto=f2+f3+f4;
					
	    			printf("Salario: %.2f\nFaixa 1= 0,00\nFaixa 2= %.2f\nFaixa 3= %.2f\nFaixa 4= %.2f\nImposto Total: %.2f",salario,f2,f3,f4,imposto);   //QUarta Faixa
				                
				}else{
					
					f2=922.67*7.5/100;
				
					f3=924.40*15/100;
					
					f4=(913.63*22.5/100);
					
					f5=((salario-4664.68)*27.5/100);
					
					imposto=f2+f3+f4+f5;
					
				 	printf("Salario: %.2f\nFaixa 1= 0,00\nFaixa 2= %.2f\nFaixa 3= %.2f\nFaixa 4= %.2f\nFaixa 5= %.2f\nImposto Total: %.2f",salario,f2,f3,f4,f5,imposto);   //Quinta Faixa
				}
			}
		}
	}
				
				
	return 0;
				
}
