#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
struct pessoa{
    char cpf[20];
    char nome[100];
    char sexo[1];
    int idade;
};
struct pessoa paciente;
	int totalPontos,sintomasPontos[10]={5,1,1,1,3,10,1,1,10,3};
	char sintomasDescricao[10][200]={"Tem febre?","Tem dor de cabe�a?","Tem secre��o nasal ou espirros?","Tem dor/irrita��o na garganta?","Tem tosse seca?","Tem dificuladade respirat�ria?","Tem dores no corpo?","Tem diarr�ia?","Esteve em contato com algu�m, positivado COVID-19 nos �ltomos 14 dias?","Esteve em locais com grande aglomera��o?"};
cadastro_paciente(){
    printf("Informe seu CPF: ");
    scanf("%s",&paciente.cpf);
    fflush(stdin);//limpa o cache antes da pr�xima entrada;
    printf("\nInforme seu Nome: ");
    gets(paciente.nome);
    printf("\nInforme seu Secso:\n Masculino (m) | Feminino (f) ");
    scanf("%s",&paciente.sexo);
    printf("\nInforme sua Idade: ");
    scanf("%d",&paciente.idade);
    system ("cls");
    printf("Confira seus dados:\n ");
    printf("\nNome: %s",paciente.nome);
    printf("\nCpf: %s",paciente.cpf);
    printf("\nSecso: %s",paciente.sexo);
    printf("\nIdade: %d",paciente.idade);
    system("pause");
}
questionario(){
	int x=0;
	char resposta;
	while(x < 10){
		printf("\n%s Sim (s) | N�o (n)\n", &sintomasDescricao[x]);
		fflush(stdin);
		scanf("%c", &resposta);
		if(resposta == 's' || resposta == 'S'){
			totalPontos += sintomasPontos[x];
			x++;
		}else if(resposta == 'n' || resposta == 'N'){
			x++;
		}else{
			printf("\n Valor inv�lido, tente novamente....");
		}
	}
}
int main(){
    setlocale(LC_ALL,"portuguese");
    cadastro_paciente();
    system("cls");
    questionario();
    system("cls");
    printf("%d",totalPontos);
	printf("\n O total de pontos � de %d", totalPontos);
	if(totalPontos <= 9){
		printf("\nEmcaminhe-se para a ala de RISCO BAIXO");
	}else if(totalPontos >= 20){
		printf("\nEncaminhe-se COM URGENCIA para a ala de RISCO ALTO");
	}else{
		printf("\nEncaminhe-se para a ala de RISCO M�DIO");
	}
    return 0;
}
