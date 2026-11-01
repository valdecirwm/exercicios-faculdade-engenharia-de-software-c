#include <stdio.h>

int main() {
    // Declaração de variáveis
    int opcaoCategoria, opcaoItem, qtd;
    float totalGeral = 0.0, desconto = 0.0, totalFinal = 0.0;
    int qtdePratos = 0, qtdeBebidas = 0, qtdeSobremesas = 0;

    // Apresentação inicial do sistema
    printf("==================================================\n");
    printf("      BEM-VINDO AO RESTAURANTE SABOR & ARTE!      \n");
    printf("==================================================\n");

    // Loop principal para permitir múltiplas operações até o usuário decidir sair
    do {
        printf("\n------------------ MENU PRINCIPAL ------------------\n");
        printf("1. Pratos Principais\n");
        printf("2. Bebidas\n");
        printf("3. Sobremesas\n");
        printf("4. Ver Resumo do Pedido e Fechar Conta\n");
        printf("0. Sair do Programa\n");
        printf("----------------------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoCategoria);

        // Estrutura de decisão principal (switch-case)
        switch (opcaoCategoria) {
            case 1: // Pratos Principais
                printf("\n--- PRATOS PRINCIPAIS ---\n");
                printf("1. Frango Grelhado com Fritas - R$ 35.00\n");
                printf("2. Parmegiana de Bovino - R$ 45.00\n");
                printf("3. Filé de Peixe ao Molho - R$ 40.00\n");
                printf("Escolha o prato (ou 0 para voltar): ");
                scanf("%d", &opcaoItem);

                if (opcaoItem >= 1 && opcaoItem <= 3) {
                    printf("Digite a quantidade desejada: ");
                    scanf("%d", &qtd);
                    
                    if (qtd > 0) {
                        qtdePratos += qtd;
                        if (opcaoItem == 1) totalGeral += 35.00 * qtd;
                        else if (opcaoItem == 2) totalGeral += 45.00 * qtd;
                        else if (opcaoItem == 3) totalGeral += 40.00 * qtd;
                        printf(">> Prato(s) adicionado(s) com sucesso!\n");
                    } else {
                        printf(">> Quantidade inválida! Deve ser maior que zero.\n");
                    }
                } else if (opcaoItem != 0) {
                    printf(">> Opção de prato inválida!\n");
                }
                break;

            case 2: // Bebidas
                printf("\n--- BEBIDAS ---\n");
                printf("1. Suco Natural (Laranja/Limão) - R$ 9.00\n");
                printf("2. Refrigerante Lata - R$ 6.00\n");
                printf("3. Água Mineral (500ml) - R$ 4.00\n");
                printf("Escolha a bebida (ou 0 para voltar): ");
                scanf("%d", &opcaoItem);

                if (opcaoItem >= 1 && opcaoItem <= 3) {
                    printf("Digite a quantidade desejada: ");
                    scanf("%d", &qtd);
                    
                    if (qtd > 0) {
                        qtdeBebidas += qtd;
                        if (opcaoItem == 1) totalGeral += 9.00 * qtd;
                        else if (opcaoItem == 2) totalGeral += 6.00 * qtd;
                        else if (opcaoItem == 3) totalGeral += 4.00 * qtd;
                        printf(">> Bebida(s) adicionada(s) com sucesso!\n");
                    } else {
                        printf(">> Quantidade inválida! Deve ser maior que zero.\n");
                    }
                } else if (opcaoItem != 0) {
                    printf(">> Opção de bebida inválida!\n");
                }
                break;

            case 3: // Sobremesas
                printf("\n--- SOBREMESAS ---\n");
                printf("1. Pudim de Leite Condensado - R$ 10.00\n");
                printf("2. Petit Gâteau com Sorvete - R$ 18.00\n");
                printf("3. Salada de Frutas - R$ 8.00\n");
                printf("Escolha a sobremesa (ou 0 para voltar): ");
                scanf("%d", &opcaoItem);

                if (opcaoItem >= 1 && opcaoItem <= 3) {
                    printf("Digite a quantidade desejada: ");
                    scanf("%d", &qtd);
                    
                    if (qtd > 0) {
                        qtdeSobremesas += qtd;
                        if (opcaoItem == 1) totalGeral += 10.00 * qtd;
                        else if (opcaoItem == 2) totalGeral += 18.00 * qtd;
                        else if (opcaoItem == 3) totalGeral += 8.00 * qtd;
                        printf(">> Sobremesa(s) adicionada(s) com sucesso!\n");
                    } else {
                        printf(">> Quantidade inválida! Deve ser maior que zero.\n");
                    }
                } else if (opcaoItem != 0) {
                    printf(">> Opção de sobremesa inválida!\n");
                }
                break;

            case 4: // Ver Pedido e Fechar Conta
                printf("\n==================================================\n");
                printf("              RESUMO DO SEU PEDIDO                \n");
                printf("==================================================\n");
                printf("• Pratos Principais: %d item(ns)\n", qtdePratos);
                printf("• Bebidas          : %d item(ns)\n", qtdeBebidas);
                printf("• Sobremesas       : %d item(ns)\n", qtdeSobremesas);
                printf("--------------------------------------------------\n");
                printf("Subtotal parcial   : R$ %.2f\n", totalGeral);

                // Requisito Bônus: Aplicar desconto de 10% a partir de R$ 100.00
                if (totalGeral >= 100.00) {
                    desconto = totalGeral * 0.10;
                    totalFinal = totalGeral - desconto;
                    printf("Desconto (10%%)     : - R$ %.2f\n", desconto);
                } else {
                    totalFinal = totalGeral;
                    printf("Desconto           : R$ 0.00\n");
                    printf("(Dica: Pedidos acima de R$ 100.00 ganham 10%% de desconto!)\n");
                }
                
                printf("==================================================\n");
                printf("TOTAL A PAGAR      : R$ %.2f\n", totalFinal);
                printf("==================================================\n");
                break;

            case 0: // Encerramento
                printf("\nObrigado por escolher o Sabor & Arte! Volte sempre.\n");
                break;

            default: // Tratamento de erro para opções inválidas no menu principal
                printf("\n>> Opção inválida! Escolha um número entre 0 e 4.\n");
        }

    } while (opcaoCategoria != 0);

    return 0;
}