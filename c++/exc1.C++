#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int soma;

    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &n3);

    printf("Digite o quarto número inteiro: ");
    scanf("%d", &n4);

    
    soma = n1 + n2 + n3 + n4;

    
    printf("A soma dos números é: %d\n", soma);

    return 0;
}

