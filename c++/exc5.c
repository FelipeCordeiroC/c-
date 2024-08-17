#include <stdio.h>

int main() {
    // Declaração das variáveis
    float salario_atual, percentual_aumento;
    float valor_aumento, novo_salario;

    // Recebe o salário atual e o percentual de aumento do usuário
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual_aumento);

    // Calcula o valor do aumento e o novo salário
    valor_aumento = salario_atual * percentual_aumento / 100;
    novo_salario = salario_atual + valor_aumento;

    // Exibe o valor do aumento e o novo salário
    printf("Valor do aumento: %.2f\n", valor_aumento);
    printf("Novo salário: %.2f\n", novo_salario);

    return 0;
}
