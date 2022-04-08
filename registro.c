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
	printf("Qual tipo de operacao ira ultilizar\n(1)Adição, (2)Subtracao, (3)Multiplicação, (4)Divisão\n");
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
		printf("Opção inválida!");
	}
	printf("\nResultado: %d",calculadora.resultado);
	return 0;
}
