#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
		
	int i, num;
	
	printf("Insira um número inteiro: \n");
	scanf("%d", &num);
	
	for(i=num; i>=0; i--){
		printf("%d\n", i);
	}
	
	for(i=num; i<=0; i++){
		printf("%d\n", i);
	}
	
	return 0;
}
