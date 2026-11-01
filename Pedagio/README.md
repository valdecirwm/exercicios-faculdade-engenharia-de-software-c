# 🚗 Sistema de Controle de Tráfego - Pedágio (Linguagem C)

[![Status do Projeto](https://img.shields.io/badge/status-concluído-brightgreen.svg)]()
[![Linguagem C](https://img.shields.io/badge/linguagem-C-blue.svg)]()
[![Licença](https://img.shields.io/badge/licença-MIT-green.svg)]()

> Projeto desenvolvido como atividade prática para a aplicação de vetores, matrizes, laços de repetição e estruturas condicionais em **Linguagem C**, transformando dados do cotidiano em informações úteis e estruturadas.

---

## 📋 Sobre o Projeto

O **Sistema de Controle de Tráfego - Pedágio** simula o monitoramento do fluxo de veículos em uma rodovia ao longo dos 7 dias da semana. O sistema automatiza a coleta de dados de tráfego, valida entradas incorretas, calcula indicadores consolidados (total e média diária) e identifica dinamicamente o **Dia de Pico**.

---

## 🚀 Funcionalidades e Requisitos Atendidos

- **Declaração e Manipulação de Vetores (Arrays):** Uso de vetor de strings (`char*`) para os dias da semana e vetor numérico (`int`) para o armazenamento das contagens de veículos.
- **Laços de Repetição (`for` e `while`):** Automatização da leitura de dados e exibição tabular, eliminando código repetitivo.
- **Validação Defensiva:** Tratamento de entradas inválidas para evitar números negativos de veículos.
- **Processamento em Tempo de Execução:** Cálculo simultâneo do somatório semanal e detecção de pico durante a própria entrada dos dados.
- **✨ Desafio Bônus Implementado:** Destaque visual automático (utilizando códigos de escape ANSI para negrito e cor verde) da linha correspondente ao "Dia de Pico" no terminal.

---

## 🛠️ Tecnologias e Ferramentas Utilizadas

- **Linguagem C** (Padrão C99 ou superior)
- **Bibliotecas nativas:** `<stdio.h>` e `<locale.h>` (para suporte a acentuação em Português)
- **Ambientes compatíveis:** VS Code, Code::Blocks, Dev-C++, GCC

---

## 💻 Código-Fonte Completo

O código abaixo apresenta a implementação principal da aplicação:

```c
#include <stdio.h>
#include <locale.h>

#define DIAS_SEMANA 7

/* 
 * Códigos ANSI para o Bônus: 
 * Aplicam destaque visual (Negrito + Cor Verde) no Dia de Pico.
 */
#define COR_DESTAQUE "\033[1;32m" 
#define COR_RESET    "\033[0m"

int main() {
    // Configura o suporte a acentuação para o português
    setlocale(LC_ALL, "Portuguese");

    // Vetor de strings com os dias da semana
    char *dias[DIAS_SEMANA] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira", 
        "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };

    // Vetor numérico para armazenar a quantidade de veículos
    int carros[DIAS_SEMANA];
    
    int totalCarros = 0;
    int maiorCarros = -1;
    int indicePico = 0;
    float mediaCarros = 0.0;

    printf("==================================================\n");
    printf("    SISTEMA DE CONTROLE DE TRÁFEGO - PEDÁGIO\n");
    printf("==================================================\n\n");
    printf("Insira a quantidade de veículos que passaram pelo pedágio em cada dia:\n\n");

    // Laço de leitura e validação dinâmica dos dados
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("-> %s: ", dias[i]);
        scanf("%d", &carros[i]);

        // Validação defensiva contra valores negativos
        while (carros[i] < 0) {
            printf("   Valor inválido! Digite um número maior ou igual a 0: ");
            scanf("%d", &carros[i]);
        }

        // Acumula o total geral
        totalCarros += carros[i];

        // Lógica para identificar o dia de pico em tempo de execução
        if (carros[i] > maiorCarros) {
            maiorCarros = carros[i];
            indicePico = i;
        }
    }

    // Cálculo da média diária com casting explícito
    mediaCarros = (float)totalCarros / DIAS_SEMANA;

    // Exibição do relatório formatado
    printf("\n==================================================\n");
    printf("            RELATÓRIO SEMANAL DE FLUXO            \n");
    printf("==================================================\n");
    printf("%-15s | %s\n", "Dia da Semana", "Nº de Veículos");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < DIAS_SEMANA; i++) {
        // Aplica o destaque visual bônus apenas no dia de pico
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