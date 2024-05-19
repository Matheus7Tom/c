#include <stdio.h>

int main(){
    int n, x, feio, bonito;

    printf("Quantos numeros voce vai digitar da sua beleza? ");
    scanf("%d", &n);
	
	feio = 0;
	bonito = 0;

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x < 10 || x > 20) {
            feio++;
        }
        else {
            bonito++;
        }
    }
	
	printf("%d BONITO\n", bonito);
	printf("%d FEIO\n", feio);

    return 0;
}
