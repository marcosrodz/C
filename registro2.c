#include<stdio.h>
#include<locale.h>

int ad(int num1, int num2){
	int resultado = num1+num2;
	return resultado;
}
int sub(int num1, int num2){
	int resultado = num1-num2;
	return resultado;
}
int mult(int num1, int num2){
	int resultado = num1*num2;
	return resultado;
}
int div(int num1, int num2){
	int resultado = num1/num2;
	return resultado;
}
main(){
	setlocale(LC_ALL, "portuguese");
	int num1,num2,resultado,op;
	scanf("%d %d %d",&num1,&num2,&op);
	switch(op){
		case 1:
			resultado = ad(num1,num2);
		break;
			case 2:
			resultado = sub (num1,num2);
		break;
			case 3:
			resultado = mult(num1,num2);
		break;
			case 4:
			resultado = div(num1,num2);
		break;
		default:
		printf("Opção inválida!");
	}
	printf("\nResultado: %d",resultado);
	return 0;
}
