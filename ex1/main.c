#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "");
	
    int i, l;

    for (i = 1, l = 10; i <= 10 && l >= 1; i++, l--) {
        printf("Progress�o: %d\tRegress�o: %d\n", i, l);
    }

    return 0;
}
