#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, vetor[5];

	for(i=0; i<=4; i++){
		printf("Digite a sua idade: [%d] = \n", i+1);
		scanf("%d", &vetor[i]);
	}
	
		int	media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4])/5;
			printf("\n A média das idades é %d.\n", media);
		
			for(i=0; i<=4; i++){
				if(vetor[i]>=18){
					printf("\n Idade maior ou igual a 18: %d\n", vetor[i]);
				}
			}
	
	
	
	return 0;
}
