#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float nota1, nota2, nota3;
    float media;

    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    
    media = (nota1 + nota2 + nota3) / 3;

    
    printf("A m�dia aritm�tica das notas �: %.2f\n", media);

    return 0;
}

