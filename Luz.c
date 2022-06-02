#include<stdio.h>

int main(){

    int bandeira, tc; //entrada tc=tipo de consumidor
    float kwh;		 //entrada

    float imposto, iluminacao, consumo, total; //calculo consumo=valor gasto pelos kwh

    scanf("%f%d%d",&kwh,&bandeira,&tc);

    if(tc==2){							//se for consumidor normal
        if(bandeira==1){
            consumo= kwh*0.62833;
            iluminacao=kwh*0.34559;
        }else{
            if(bandeira==2){
                consumo= kwh*0.64333;
                iluminacao=kwh*0.36059;
            }else{
                if(bandeira==3){
                    consumo= kwh*0.66833;
                    iluminacao=kwh*0.38559;
                }else{
                    if(bandeira==4){
                        consumo= kwh*0.68833;
                        iluminacao=kwh*0.40559;
                    }
                }
            }
        }
    }else{								//se for consumidor de baixa renda
        if(kwh <= 30){ 					//até 30 kwh
            if(bandeira==1){
                consumo= kwh* 0.19712;
                iluminacao=kwh*0.34559;
            }else{
                if(bandeira==2){
                    consumo= kwh*0.20237;
                    iluminacao=kwh*0.36059;
                }else{
                    if(bandeira==3){
                        consumo= kwh*0.21112;
                        iluminacao=kwh*0.38559;
                    }else{
                        consumo= kwh*0.21812;
                        iluminacao=kwh*0.40559;
                    }
                }
            }
        }else{							//até 100 kwh
	    	if(kwh <= 100){
	    		if(bandeira==1){
	    			consumo= 30*0.19712+((kwh-30)*0.33793);
	    			iluminacao=kwh*0.34559;
				}else{
					if(bandeira==2){
						consumo= 30*0.20237+((kwh-30)*0.34693);
						iluminacao=kwh*0.36059;
					}else{
						if(bandeira==3){
							consumo= 30*0.21112+((kwh-30)*0.36193);
							iluminacao=kwh*0.38559;
						}else{
							consumo= 30*0.21812+((kwh-30)*0.37393);
							iluminacao=kwh*0.40559;
						}
					}
				}
	   		}else{							//até 220 kwh
				if(kwh <= 220){
					if(bandeira==1){
						consumo= 30*0.19712+70*0.33793+((kwh-100)*0.50689);
						iluminacao=kwh*0.34559;
					}else{
						if(bandeira==2){
							consumo= 30*0.20237+70*0.34693+((kwh-100)*0.52039);
							iluminacao=kwh*0.36059;
						}else{
							if(bandeira==3){
								consumo= 30*0.21112+70*0.36193+((kwh-100)*0.54289);
								iluminacao=kwh*0.38559;
							}else{
								consumo= 30*0.21812+70*0.37393+((kwh-100)*0.56089);
								iluminacao=kwh*0.40559;
							}
						}
					}
				}else{					//superior a 220 kwh
					if(bandeira==1){
						consumo= 30*0.19712+70*0.33793+120*0.50689+((kwh-220)*0.56321);
						iluminacao=kwh*0.34559;
					}else{
						if(bandeira==2){
							consumo= 30*0.20237+70*0.34693+120*0.52039+((kwh-220)*0.57821);
							iluminacao=kwh*0.36059;
						}else{
							if(bandeira==3){
								consumo= 30*0.21112+70*0.36193+120*0.54289+((kwh-220)*0.60321);
								iluminacao=kwh*0.38559;
							}else{
								consumo= 30*0.21812+70*0.37393+120*0.56089+((kwh-220)*0.62321);
								iluminacao=kwh*0.40559;
							}
						}
					}
				}
			}
		}
	}
	
	imposto=(consumo+iluminacao)*37/100;
	total=consumo+iluminacao+imposto;
    printf("Valor da conta: %.2f\nIluminacao: %.2f\nValor dos impostos: %.2f\nValor total da conta: %.2f",consumo,iluminacao,imposto,total);


    return 0;
}
