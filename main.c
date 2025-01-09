//Antonio Hermogenes Ribeiro Lopes
atividade: goto, break, continue


#include <stdio.h>
#include <stdlib.h>



int main() {
    int numero, soma = 0;

    while (1) {
        printf("Digite um número (-1 para sair): ");
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        soma += numero;
    }

    printf("A soma dos números digitados é: %d\n", soma);
    return 0;
}
/*
 int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
*/
/*
int main() {
    int inicio, fim;

    printf("Digite o início do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 7 == 0) {
            printf("O primeiro múltiplo de 7 no intervalo é: %d\n", i);
            break;
        }
    }

    return 0;
}
*/
/*
int main() {
    int numero, soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &numero);
        if (numero < 0) {
            continue;
        }
        soma += numero;
    }

    printf("A soma dos números positivos é: %d\n", soma);
    return 0;
}

*/

/*
int main() {
    int num1, num2;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        goto erro;
    }

    resultado = (num1 / num2);
    printf("O resultado da divisão é: %.2f\n", resultado);


     erro:
    printf("Erro: divisão por zero não é permitida.\n");

    return 0;
}




    return 0;
}
*/
