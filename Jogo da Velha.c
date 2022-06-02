#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
setlocale(LC_ALL,"portuguese");
char matriz[3][3];
int y=0, z=0, replay; // variavel para prar/continuar algo
int i, j; // contadores
int l, c; // Variaveis para linha e coluna
int cq;  //outras váriaveis opcionais
do{
	system("cls");
	y=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz[i][j]=' ';    //valores dentro dos espaços no tabuleiro
		}
	}
	
	do{
	printf("\nSua vez:\n"); 							//Espaçamento para não misturar o tabuleiro
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf(" %c |",matriz[i][j]);   //construção do tabuleiro com os espaços criados antes
		}
	}
	
	do{
		z=0;
		if(cq>0){
			printf("\nComandos errados ou marcados, digite novamente:\n");
		}
		printf("\nDigite a linha:\n");
		scanf("%d",&l);
		printf("Digite a Coluna:\n");
		scanf("%d",&c);
			
		if(matriz[l-1][c-1]==' '){
			matriz[l-1][c-1]='x';
			z=1;	
		}
		cq++;
	}while(z!=1); 
	
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf(" %c |",matriz[i][j]); 
		}
	}
	
	//Primeiro, o computador irá analisar se ele pode ganhar
	
	if((matriz[0][0]=='o') && (matriz[0][1]=='o') && (matriz[0][2]==' ')){
		matriz[0][2]='o';
		y=1;
	}else{
			
			if((matriz[0][0]=='o') && (matriz[0][1]==' ') && (matriz[0][2]=='o')){
				matriz[0][1]='o';
				y=1;
			}else{
				
				if((matriz[0][0]==' ') && (matriz[0][1]=='o') && (matriz[0][2]=='o')){
					matriz[0][0]='o';
					y=1;
				}else{
				//primeira linha feita
					
					if((matriz[1][0]=='o') && (matriz[1][1]=='o') && (matriz[1][2]==' ')){
						matriz[1][2]='o';
						y=1;
					}else{
						
						if((matriz[1][0]=='o') && (matriz[1][1]==' ') && (matriz[1][2]=='o')){
							matriz[1][1]='o';
							y=1;
						}else{
							
							if((matriz[1][0]==' ') && (matriz[1][1]=='o') && (matriz[1][2]=='o')){
								matriz[1][0]='o';
								y=1;
							}else{
							//segunda linha feita
								
								if((matriz[2][0]=='o') && (matriz[2][1]=='o') && (matriz[2][2]==' ')){
									matriz[2][2]='o';
									y=1;
								}else{
						
									if((matriz[2][0]=='o') && (matriz[2][1]==' ') && (matriz[2][2]=='o')){
										matriz[2][1]='o';
										y=1;
									}else{
							
										if((matriz[2][0]==' ') && (matriz[2][1]=='o') && (matriz[2][2]=='o')){
											matriz[2][0]='o';
											y=1;
										}else{
										//terceira linha feita
											
	//colunas										
	if((matriz[0][0]=='o') && (matriz[1][0]=='o') && (matriz[2][0]==' ')){
		matriz[2][0]='o';
		y=1;
	}else{
						
		if((matriz[0][0]=='o') && (matriz[1][0]==' ') && (matriz[2][0]=='o')){
			matriz[1][0]='o';
			y=1;
		}else{
							
			if((matriz[0][0]==' ') && (matriz[0][0]=='o') && (matriz[2][0]=='o')){
				matriz[0][0]='o';
				y=1;
			}else{
			//primeria coluna feita
			
			if((matriz[0][1]=='o') && (matriz[1][1]=='o') && (matriz[2][1]==' ')){
					matriz[2][1]='o';
					y=1;
			}else{
						
				if((matriz[0][1]=='o') && (matriz[1][1]==' ') && (matriz[2][1]=='o')){
					matriz[1][1]='o';
					y=1;
				}else{
							
					if((matriz[0][1]==' ') && (matriz[1][1]=='o') && (matriz[2][1]=='o')){
						matriz[0][1]='o';
						y=1;
					}else{
					//Segunda coluna feita
						
						if((matriz[0][2]=='o') && (matriz[1][2]=='o') && (matriz[2][2]==' ')){
							matriz[2][2]='o';
							y=1;
						}else{
						
							if((matriz[0][2]=='o') && (matriz[1][2]==' ') && (matriz[2][2]=='o')){
								matriz[1][2]='o';
								y=1;
							}else{
							
								if((matriz[0][2]==' ') && (matriz[1][2]=='o') && (matriz[2][2]=='o')){
									matriz[0][2]='o';
									y=1;
								}else{
								//Terceira coluna feita
								
	//diagonais
	if((matriz[0][0]=='o') && (matriz[1][1]=='o') && (matriz[2][2]==' ')){
		matriz[2][2]='o';
		y=1;
	}else{
		if((matriz[0][0]=='o') && (matriz[1][1]==' ') && (matriz[2][2]=='o')){
			matriz[1][1]='o';
			y=1;
		}else{
			if((matriz[0][0]==' ') && (matriz[1][1]=='o') && (matriz[2][2]=='o')){
				matriz[0][0]='o';
				y=1;
			}else{
			//diagonal da esquerda para a direita feita
			
				if((matriz[0][2]=='o') && (matriz[1][1]=='o') && (matriz[2][0]==' ')){
					matriz[2][0]='o';
					y=1;
				}else{
					if((matriz[0][2]=='o') && (matriz[1][1]==' ') && (matriz[2][0]=='o')){
						matriz[1][1]='o';
						y=1;
					}else{
						if((matriz[0][2]==' ') && (matriz[1][1]=='o') && (matriz[2][0]=='o')){
							matriz[0][2]='o';
							y=1;
						}else{
						//diagonal da direita para a esquerda feita
						//VERIFICAÇÃO DE VITÓRIA DO COMPUTADOR CONCLUÍDO		
																														
	//Verificar se o computador pode perder e evitar que isso aconteça	
																		
	if((matriz[0][0]=='x') && (matriz[0][1]=='x') && (matriz[0][2]==' ')){
		matriz[0][2]='o';
	}else{
		
			if((matriz[0][0]=='x') && (matriz[0][1]==' ') && (matriz[0][2]=='x')){
				matriz[0][1]='o';
			}else{
				
				if((matriz[0][0]==' ') && (matriz[0][1]=='x') && (matriz[0][2]=='x')){
					matriz[0][0]='o';
				}else{
				//primeira linha feita
					
					if((matriz[1][0]=='x') && (matriz[1][1]=='x') && (matriz[1][2]==' ')){
						matriz[1][2]='o';
					}else{
						
						if((matriz[1][0]=='x') && (matriz[1][1]==' ') && (matriz[1][2]=='x')){
							matriz[1][1]='o';
						}else{
							
							if((matriz[1][0]==' ') && (matriz[1][1]=='x') && (matriz[1][2]=='x')){
								matriz[1][0]='o';
							}else{
							//segunda linha feita
								
								if((matriz[2][0]=='x') && (matriz[2][1]=='x') && (matriz[2][2]==' ')){
									matriz[2][2]='o';
								}else{
						
									if((matriz[2][0]=='x') && (matriz[2][1]==' ') && (matriz[2][2]=='x')){
										matriz[2][1]='o';
									}else{
							
										if((matriz[2][0]==' ') && (matriz[2][1]=='x') && (matriz[2][2]=='x')){
											matriz[2][0]='o';
										}else{
										//terceira linha feita
											
	//colunas										
	if((matriz[0][0]=='x') && (matriz[1][0]=='x') && (matriz[2][0]==' ')){
		matriz[2][0]='o';
	}else{
						
		if((matriz[0][0]=='x') && (matriz[1][0]==' ') && (matriz[2][0]=='x')){
			matriz[1][0]='o';
		}else{
							
			if((matriz[0][0]==' ') && (matriz[0][0]=='o') && (matriz[2][0]=='x')){
				matriz[0][0]='o';
			}else{
			//primeria coluna feita
			
			if((matriz[0][1]=='x') && (matriz[1][1]=='x') && (matriz[2][1]==' ')){
					matriz[2][1]='o';
			}else{
						
				if((matriz[0][1]=='x') && (matriz[1][1]==' ') && (matriz[2][1]=='x')){
					matriz[1][1]='o';
				}else{
							
					if((matriz[0][1]==' ') && (matriz[1][1]=='x') && (matriz[2][1]=='x')){
						matriz[0][1]='o';
					}else{
					//Segunda coluna feita
						
						if((matriz[0][2]=='x') && (matriz[1][2]=='x') && (matriz[2][2]==' ')){
							matriz[2][2]='o';
						}else{
						
							if((matriz[0][2]=='x') && (matriz[1][2]==' ') && (matriz[2][2]=='x')){
								matriz[1][2]='o';
							}else{
							
								if((matriz[0][2]==' ') && (matriz[1][2]=='x') && (matriz[2][2]=='x')){
									matriz[0][2]='o';
								}else{
								//Terceira coluna feita
								
	//diagonais
	if((matriz[0][0]=='x') && (matriz[1][1]=='x') && (matriz[2][2]==' ')){
		matriz[2][2]='o';
	}else{
		if((matriz[0][0]=='x') && (matriz[1][1]==' ') && (matriz[2][2]=='x')){
			matriz[1][1]='o';
		}else{
			if((matriz[0][0]==' ') && (matriz[1][1]=='x') && (matriz[2][2]=='x')){
				matriz[0][0]='o';
			}else{
			//diagonal da esquerda para a direita feita
			
				if((matriz[0][2]=='x') && (matriz[1][1]=='x') && (matriz[2][0]==' ')){
					matriz[2][0]='o';
				}else{
					if((matriz[0][2]=='x') && (matriz[1][1]==' ') && (matriz[2][0]=='o')){
						matriz[1][1]='o';
					}else{
						if((matriz[0][2]==' ') && (matriz[1][1]=='x') && (matriz[2][0]=='x')){
							matriz[0][2]='o';
						}else{
						//diagonal da direita para a esquerda feita
						//VERIFICAÇÃO DE DERROTA DO COMPUTADOR CONCLUÍDO

// Verificação após a primeira jogada do usuário

	if((matriz[0][0]=='x') && (matriz[0][1]==' ') && (matriz[1][0]==' ') && (matriz[1][1]==' ')){
		matriz[1][1]='o';
	}else{
		if((matriz[0][0]==' ') && (matriz[0][1]=='x') && (matriz[0][2]==' ') && (matriz[1][1]==' ')){
			matriz[1][1]='o';
		}else{
			if((matriz[1][2]==' ') && (matriz[0][1]==' ') && (matriz[0][2]=='x') && (matriz[1][1]==' ')){
				matriz[1][1]='o';
			}else{
			//primeira linha feita
				if((matriz[1][0]=='x') && (matriz[1][1]==' ') && (matriz[0][0]==' ') && (matriz[0][1]==' ') && (matriz[2][0]==' ') && (matriz[2][1]==' ')){
					matriz[1][1]='o';
				}else{
					if((matriz[1][1]=='x') && (matriz[0][0]==' ') && (matriz[0][2]==' ') && (matriz[2][0]==' ') && (matriz[2][2]==' ')){
						matriz[0][0]='o';
					}else{
						if((matriz[1][2]=='x') && (matriz[1][1]==' ') && (matriz[0][1]==' ') && (matriz[0][2]==' ') && (matriz[2][1]==' ') && (matriz[2][2]==' ')){
						matriz[1][1]='o';
						}else{
						//segunda linha feita
							if((matriz[2][0]=='x') && (matriz[1][0]==' ') && (matriz[1][1]==' ') && (matriz[2][1]==' ')){
								matriz[1][1]='o';
							}else{
								if((matriz[2][1]=='x') && (matriz[2][0]==' ') && (matriz[1][0]==' ') && (matriz[1][1]==' ') && (matriz[1][2]==' ') && (matriz[2][2]==' ')){
									matriz[1][1]='o';
								}else{
									if((matriz[2][2]=='x') && (matriz[2][0]==' ') && (matriz[1][0]==' ') && (matriz[1][1]==' ') && (matriz[1][2]==' ')){
										matriz[1][1]='o';
									}else{
								//terceira linha feita
								//VERIFICAÇÃO DA PRIMEIRA JOGADA FEITA
	
	//Segunda jogada do usuário
	if((matriz[1][1]=='x') && (matriz[2][2]=='x') && (matriz[0][0]=='o') && (matriz[0][2]==' ')){
		matriz[0][2]='o';
	}else{
		if((matriz[2][2]=='x') && (matriz[1][0]=='x') && (matriz[1][1]=='o') && (matriz[2][0]==' ')){
			matriz[2][0]='o';
		}else{
			if((matriz[0][2]=='x') && (matriz[1][0]=='x') && (matriz[1][1]=='o') && (matriz[0][0]==' ')){
				matriz[0][0]='o';
			}else{
				if((matriz[0][0]=='x') && (matriz[1][2]=='x') && (matriz[1][1]=='o') && (matriz[0][2]==' ')){
					matriz[0][2]='o';
				}else{
					if((matriz[2][0]=='x') && (matriz[1][2]=='x') && (matriz[1][1]=='o') && (matriz[2][2]==' ')){
						matriz[2][2]='o';
					}else{
						if((matriz[2][2]=='x') && (matriz[0][1]=='x') && (matriz[1][1]=='o')  && (matriz[0][2]==' ')){
							matriz[0][2]='o';
						}else{
							if((matriz[2][0]=='x') && (matriz[0][1]=='x') && (matriz[1][1]=='o') && (matriz[0][0]==' ')){
								matriz[0][0]='o';
							}else{
								if((matriz[0][2]=='x') && (matriz[2][1]=='x') && (matriz[1][1]=='o') && (matriz[2][2]==' ')){
									matriz[2][2]='o';
								}else{
									if((matriz[0][0]=='x') && (matriz[2][1]=='x') && (matriz[1][1]=='o') && (matriz[2][0]==' ')){
										matriz[2][0]='o';
									}else{
									 	if((matriz[1][1]=='o') && (matriz[2][0]=='x') && (matriz[0][2]=='x') && (matriz[2][1]==' ')){
											matriz[2][1]='o';
										}else{
											if((matriz[1][1]=='o') && (matriz[0][0]=='x') && (matriz[2][2]=='x') && (matriz[1][0]==' ')){
												matriz[1][0]='o';		
											}else{
									//Resposta da segunda jogada feita
									
	//RESTO DE POSSIB|ILIDADES
	if(matriz[0][0]==' '){
		matriz[0][0]='o';
	}else{
		if(matriz[0][1]==' '){
			matriz[0][1]='o';
		}else{
			if(matriz[0][2]==' '){
				matriz[0][2]='o';
			}else{
				if(matriz[1][0]==' '){
					matriz[1][0]='o';
				}else{
					if(matriz[1][1]==' '){
						matriz[1][1]='o';
					}else{
						if(matriz[1][2]==' '){
							matriz[1][2]='o';
						}else{
							if(matriz[2][0]==' '){
								matriz[2][0]='o';
							}else{
								if(matriz[2][1]==' '){
									matriz[2][1]='o';
								}else{
									if(matriz[2][2]==' '){
										matriz[2][2]='o';
									}else{
									//OUTRAS POSSIBILIDADES FEITAS
									
	//Resposta final para finalizar dando velha
	if((matriz[0][0]!=' ') && (matriz[0][1]!=' ') && (matriz[0][2]!=' ') && (matriz[1][0]!=' ') && (matriz[1][1]!=' ') && (matriz[1][2]!=' ') && (matriz[2][0]!=' ') && (matriz[2][1]!=' ') && (matriz[2][2]!=' ')){
		y=2;		
	}
									}
								}
							}
						}
					}
				}
			}
		}
	}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
									}
								}
											}
										}
									}		
								}
							}
						}
					}
				}			
			}
		}
	}
								}
							}
						}
					}
				}
			}
		}
	}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
								}
							}
						}
					}
				}			
			}
		}
	}
								}
							}
						}
					}
				}
			}
		}
	}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cq=0;
	system ("cls");
	}while(y!=1 && y!=2);
	printf("\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf(" %c |",matriz[i][j]);
		}
	}
	if(y==1){
		printf("\n\nVocê Perdeu o Jogo!\n");
	}else{
		printf("\n\nO Jogo deu Velha!\n");
	}
	printf("Quer jogar Mais? Sim(1) Não(0)\nSe digitar outro número será fechado: ");
	scanf("%d",&replay);
	if(replay!=1){
		system("cls");
		printf("\nObrigado por Jogar!\n");
	}
}while(replay==1);
return 0;
}
