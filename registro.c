#include<stdio.h>
#include<locale.h>
struct calculo{
	int num1;
	int num2;
	int resultado;
};
struct calculo calculadora;
pega_numero(){
	printf("digite o primeiro numero: \n");
	scanf("%d", &calculadora.num1);
	printf("digite o segundo numero: \n");
	scanf("%d", &calculadora.num2);		
	}
ad(){
	calculadora.resultado=calculadora.num1+calculadora.num2;
}
sub(){
	calculadora.resultado=calculadora.num1-calculadora.num2;
}
mult(){
	calculadora.resultado=calculadora.num1*calculadora.num2;
}
div(){
	calculadora.resultado=calculadora.num1/calculadora.num2;
}

main(){
	setlocale(LC_ALL, "portuguese");
	pega_numero();
	int opcao;
	printf("Qual tipo de operacao ira ultilizar\n(1)Adi��o, (2)Subtracao, (3)Multiplica��o, (4)Divis�o\n");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			ad();
		break;
			case 2:
			sub();
		break;
			case 3:
			mult();
		break;
			case 4:
			div();
		break;
		default:
		printf("Op��o inv�lida!");
	}
	printf("\nResultado: %d",calculadora.resultado);
	return 0;
}
