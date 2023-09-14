

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, n, vet[10];
    
    srand(time(NULL));
    
    for(i=0; i<10; i++){
    	vet[i] = rand() % 100;
	}
	
	for(i=0; i<10; i++){
    	printf("%d\t", vet[i]);
	}

    printf("\n\nQual valor deseja buscar?");
    scanf("%d", &n);

    for (i = 0; i < 10; i++) {
        if (vet[i] == n) {
            printf("%d ocorre na posição %d do vetor\n", n, i);
            break;
        }
    }

    if (i == 10) {
        printf("%d não foi encontrado no vetor.\n", n);
    }

    return 0;
}
