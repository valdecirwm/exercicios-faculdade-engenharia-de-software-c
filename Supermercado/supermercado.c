#include <stdio.h>

// Função para exibir os elementos do vetor formatados como preços
void exibirVetor(float vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("R$ %.2f", vetor[i]);
        if (i < tamanho - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

// Função para copiar os dados de um vetor para outro
void copiarVetor(float origem[], float destino[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        destino[i] = origem[i];
    }
}

// Função que aplica o Bubble Sort em ordem CRESCENTE (menor para maior)
void bubbleSortCrescente(float vetor[], int tamanho)
{
    int i, j;
    float temp;

    // O loop externo controla o número de passagens (varreduras) pelo vetor
    for (i = 0; i < tamanho - 1; i++)
    {
        // O loop interno realiza as comparações entre elementos vizinhos
        for (j = 0; j < tamanho - i - 1; j++)
        {
            // Se o elemento atual for MAIOR que o próximo, eles trocam de posição
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

// Função que aplica o Bubble Sort em ordem DECRESCENTE (maior para menor)
void bubbleSortDecrescente(float vetor[], int tamanho)
{
    int i, j;
    float temp;

    // O loop externo controla o número de passagens pelo vetor
    for (i = 0; i < tamanho - 1; i++)
    {
        // O loop interno realiza as comparações entre elementos vizinhos
        for (j = 0; j < tamanho - i - 1; j++)
        {
            // Se o elemento atual for MENOR que o próximo, eles trocam de posição
            if (vetor[j] < vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Definindo o tamanho fixo do vetor com 10 elementos
    int tamanho = 10;

    // Tema escolhido: Preços de 10 produtos diferentes de um supermercado
    float precosOriginais[10] = {45.90, 5.50, 12.30, 89.99, 2.75, 23.40, 15.00, 7.80, 34.50, 60.10};

    // Vetores auxiliares para preservar o vetor original durante a ordenação
    float precosCrescente[10];
    float precosDecrescente[10];

    printf("==================================================\n");
    printf("   ORGANIZACAO DE DADOS - METODO BUBBLE SORT\n");
    printf("==================================================\n\n");

    // 1. Exibir os dados originais do vetor antes de qualquer ordenação
    printf("1. Dados Originais (Precos dos Produtos):\n");
    exibirVetor(precosOriginais, tamanho);
    printf("\n");

    // Copiando os dados originais para os vetores de trabalho
    copiarVetor(precosOriginais, precosCrescente, tamanho);
    copiarVetor(precosOriginais, precosDecrescente, tamanho);

    // 2. Aplicar o Bubble Sort em ordem crescente
    bubbleSortCrescente(precosCrescente, tamanho);

    printf("2. Dados Ordenados em Ordem Crescente:\n");
    exibirVetor(precosCrescente, tamanho);
    printf("\n");

    // 3. Aplicar o Bubble Sort em ordem decrescente
    bubbleSortDecrescente(precosDecrescente, tamanho);

    printf("3. Dados Ordenados em Ordem Decrescente:\n");
    exibirVetor(precosDecrescente, tamanho);
    printf("\n");

    printf("==================================================\n");
    printf("Fim da execucao do programa.\n");

    return 0;
}