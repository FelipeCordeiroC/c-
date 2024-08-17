#include <stdio.h>

int main() {
    // Declaração de variáveis
    double alturaDegrau, alturaDesejada;
    int numeroDegraus;

    
    printf("Digite a altura de um degrau (em metros): ");
    scanf("%lf", &alturaDegrau);

    
    printf("Digite a altura desejada (em metros): ");
    scanf("%lf", &alturaDesejada);

    
    if (alturaDegrau <= 0) {
        printf("A altura do degrau deve ser maior que zero.\n");
        return 1;  // Encerra o programa com código de erro
    }

    
    numeroDegraus = (int) (alturaDesejada / alturaDegrau);

    
    if (alturaDesejada > (numeroDegraus * alturaDegrau)) {
        numeroDegraus += 1;
    }

    
    printf("Número de degraus necessários: %d\n", numeroDegraus);

    return 0;
}
