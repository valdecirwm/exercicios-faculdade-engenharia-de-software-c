#include <stdio.h>
#include <locale.h>

#define DIAS_SEMANA 7

// Códigos ANSI para formatação no terminal (Bônus: Destaque em Negrito e Cor)
#define COR_DESTAQUE "\033[1;32m" // Negrito + Verde
#define COR_RESET    "\033[0m"

int main() {
    // Configura o suporte a acentuação para o português
    setlocale(LC_ALL, "Portuguese");

    // Vetor com os nomes dos dias da semana
    char *dias[DIAS_SEMANA] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira", 
        "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };

    // Vetor para armazenar a quantidade de carros por dia
    int carros[DIAS_SEMANA];
    int totalCarros = 0;
    int maiorCarros = -1;
    int indicePico = 0;
    float mediaCarros = 0.0;

    printf("==================================================\n");
    printf("    SISTEMA DE CONTROLE DE TRÁFEGO - PEDÁGIO\n");
    printf("==================================================\n\n");
    printf("Insira a quantidade de veículos que passaram pelo pedágio em cada dia:\n\n");

    // Laço para leitura dos dados (Armazenamento em Vetor)
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("-> %s: ", dias[i]);
        scanf("%d", &carros[i]);

        // Validação simples para evitar valores negativos
        while (carros[i] < 0) {
            printf("   Valor inválido! Digite um número maior ou igual a 0: ");
            scanf("%d", &carros[i]);
        }

        // Acumula o total geral de carros
        totalCarros += carros[i];

        // Lógica para identificar o dia de pico durante o cadastro
        if (carros[i] > maiorCarros) {
            maiorCarros = carros[i];
            indicePico = i;
        }
    }

    // Cálculo da média diária de veículos
    mediaCarros = (float)totalCarros / DIAS_SEMANA;

    // Exibição dos resultados formatados
    printf("\n==================================================\n");
    printf("           RELATÓRIO SEMANAL DE FLUXO             \n");
    printf("==================================================\n");
    printf("%-15s | %s\n", "Dia da Semana", "Nº de Veículos");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < DIAS_SEMANA; i++) {
        // Aplica o bônus de destaque (cor/negrito) apenas no dia de pico
        if (i == indicePico) {
            printf("%s%-15s | %d (DIA DE PICO)%s\n", COR_DESTAQUE, dias[i], carros[i], COR_RESET);
        } else {
            printf("%-15s | %d\n", dias[i], carros[i]);
        }
    }

    printf("--------------------------------------------------\n");
    printf("Total de veículos na semana: %d\n", totalCarros);
    printf("Média diária de veículos:    %.2f\n", mediaCarros);
    printf("==================================================\n");

    return 0;
}