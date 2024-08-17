#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float salario_atual, percentual_aumento;
    float valor_aumento, novo_salario;

    // Recebe o sal�rio atual e o percentual de aumento do usu�rio
    printf("Digite o sal�rio atual do funcion�rio: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual_aumento);

    // Calcula o valor do aumento e o novo sal�rio
    valor_aumento = salario_atual * percentual_aumento / 100;
    novo_salario = salario_atual + valor_aumento;

    // Exibe o valor do aumento e o novo sal�rio
    printf("Valor do aumento: %.2f\n", valor_aumento);
    printf("Novo sal�rio: %.2f\n", novo_salario);

    return 0;
}
