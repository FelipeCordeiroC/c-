#include <stdio.h>

int main() {
    
    float salario_atual, novo_salario;
    const float aumento_percentual = 25.0;

    // Recebe o salário atual do usuário
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    // Calcula o novo salário com um aumento de 25%
    novo_salario = salario_atual + (salario_atual * aumento_percentual / 100);

    // Exibe o novo salário
    printf("O novo salário após um aumento de %.2f%% é: %.2f\n", aumento_percentual, novo_salario);

    return 0;
}
