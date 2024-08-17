#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    double alturaDegrau, alturaDesejada;
    int numeroDegraus;

    
    printf("Digite a altura de um degrau (em metros): ");
    scanf("%lf", &alturaDegrau);

    
    printf("Digite a altura desejada (em metros): ");
    scanf("%lf", &alturaDesejada);

    
    if (alturaDegrau <= 0) {
        printf("A altura do degrau deve ser maior que zero.\n");
        return 1;  // Encerra o programa com c�digo de erro
    }

    
    numeroDegraus = (int) (alturaDesejada / alturaDegrau);

    
    if (alturaDesejada > (numeroDegraus * alturaDegrau)) {
        numeroDegraus += 1;
    }

    
    printf("N�mero de degraus necess�rios: %d\n", numeroDegraus);

    return 0;
}
