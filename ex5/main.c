#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	int soma = 0, num;
	
	do{
		printf("Insira um n�mero: \n");
		scanf("%d", &num);
		
		soma+=num;
	}while(soma < 30);
	
	printf("A soma dos n�meros atingiu os 30");	
	
	return 0;
}
