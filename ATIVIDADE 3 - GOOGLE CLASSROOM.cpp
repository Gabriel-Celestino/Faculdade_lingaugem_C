#include <stdio.h>
#include <locale.h>
#include <string.h>

void lerNomes(char nome[20][200]){
	int i;
	
	for (i=0;i<20;i++){
		
		printf ("Informe o Nome do Cliente %d:", (i+1));
		gets(nome[i]);
		
		
		
		
			}
		}
		
		void leValores(float valores[20]){
			
			int x;
			
			for (x=0;x<20;x++){
				printf ("Informe o valor de bonus do cliente %d :"  , (x+1));
				scanf ("%f" , &valores);
	}
	
	
}

int main (){
	

	
	// Declaração de Variaveis
	char nome [20][200];
	float valores[20];
	int i;
	
	lerNomes(nome);
	leValores (valores);
	
	for (i=0;i<20;i++){
		printf ("%s recebera %.2f", nome[i],valores[19-i]);
	}
	
	
	return 0;
	
	
}

