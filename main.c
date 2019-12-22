#include<stdio.h>
#include<stdlib.h>

void preencheZero(int *v, int n);
void op1(int *v, int op);
void entrada(int *v, int op);
void saida(int *v, int op);

int main(){
	int vaga[20]; 
	int  x, opcao, ocupada, livre;
	
  preencheZero(vaga, 20);

	
	do{
	
		printf("MENU \n");
		printf("1-Visao Geral \n");
		printf("2-Registrar Entrada \n");
		printf("3-Registrar Saida \n");
		printf("4-Sair do programa \n");
		printf("Opcao: ");
		scanf("%d",&opcao);
		
    op1(vaga, opcao);

		entrada(vaga, opcao);

    saida(vaga, opcao);
	
		
	}while(opcao!=4);
	return 0;
}//fim-main

void preencheZero(int *v, int n){
int x;
  	// preencher o vetor com zeros (vaga livre)
	for(x=0; x<20; x++){
		*(v+x) = 0;
	}//fim-for
}

void op1(int *v, int op){
int x;
int oc;
if(op == 1){
			oc = 0;
			for(x=0;x<20;x++){
				printf("%d ", *(v+x));
				if(*(v+x) == 1) oc++;
			}//fim-for
			printf("\nOcupadas = %d", oc);
			printf("\nLivres = %d \n", 20-oc);
}}

void entrada(int *v, int op){
int x, livre;
if(op ==2){


  //encontrar uma vaga
			livre = -1;  // sem vaga livre
			
			for(x=0; x<20; x++){
				if(*(v+x) == 0){
					livre = x;
					break; // encerra o loop for
				}
			} 
			
			if(livre == -1){
				printf("Nao ha vagas! \n");

			}else{
				printf("A vaga %d esta livre.\n", livre);
				printf("Usar? (1-sim/2-nao) ");
				scanf("%d",&x);
				if(x == 1){
					v[livre] = 1;
					printf("Entrada registrada! \n");
				
}
}
}}

void saida(int *v, int op){
int x;
if(op == 3){
  printf("Qual vaga deseja liberar? (0-19) ");
			scanf("%d",&x);
			if( x<0 || x>19){ 
				printf("Vaga invalida! \n");
			}else if(*(v+x) == 0){
				printf("A vaga ja esta livre! \n");
			}else{
				v[x] = 0;
				printf("Vaga liberada! \n");
			}
			
		}
  }
