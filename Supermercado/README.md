# 📦 Ordenação de Preços com Bubble Sort em C

Este repositório contém um programa desenvolvido em **linguagem C** para a disciplina de algoritmos e estrutura de dados, com o objetivo de demonstrar a organização eficiente de dados utilizando o método de ordenação **Bubble Sort (Método Bolha)**.

---

## 🚀 Sobre o Projeto

O programa simula um cenário cotidiano de supermercado, manipulando um vetor estático com **10 preços de produtos**. Ele realiza a leitura dos dados originais, aplica o algoritmo Bubble Sort de forma isolada para gerar duas ordens distintas (crescente e decrescente) e exibe os resultados formatados no console.

---

## 🛠️ Tecnologias e Conceitos Utilizados

* **Linguagem C** (`stdio.h`)
* **Vetores (Arrays unidimensionais)** de 10 posições com o tipo de dado `float`
* **Estruturas de Repetição Aninhadas** (`for` dentro de `for`)
* **Estruturas Condicionais** (`if`) para verificação de pares adjacentes
* **Lógica de Troca (*Swap*)** utilizando variável temporária

---

## 💻 Estrutura do Código

### 1. Declaração do Vetor de Dados
Optou-se pelo tipo de dado `float` para garantir a precisão monetária (centavos) dos produtos:
```c
float precosOriginais[10] = {45.90, 5.50, 12.30, 89.99, 2.75, 23.40, 15.00, 7.80, 34.50, 60.10};

2. Exibição dos Dados Originais
Um laço percorre o vetor exibindo os valores não ordenados formatados como moeda (R$):

C
printf("Dados Originais (Precos dos Produtos):\n");
for (int i = 0; i < 10; i++) {
    printf("R$ %.2f", precosOriginais[i]);
    if (i < 9) printf(", ");
}
3. Ordenação Crescente (Bubble Sort)
Compara elementos vizinhos e faz o maior valor "flutuar" para o final do vetor (>):

C
for (i = 0; i < 10 - 1; i++) {
    for (j = 0; j < 10 - i - 1; j++) {
        if (precosCrescente[j] > precosCrescente[j + 1]) {
            temp = precosCrescente[j];
            precosCrescente[j] = precosCrescente[j + 1];
            precosCrescente[j + 1] = temp;
        }
    }
}
4. Ordenação Decrescente (Bubble Sort)
Inverte o operador lógico (<) para forçar o menor valor a flutuar para o final:

C
for (i = 0; i < 10 - 1; i++) {
    for (j = 0; j < 10 - i - 1; j++) {
        if (precosDecrescente[j] < precosDecrescente[j + 1]) {
            temp = precosDecrescente[j];
            precosDecrescente[j] = precosDecrescente[j + 1];
            precosDecrescente[j + 1] = temp;
        }
    }
}
📊 Exemplo de Saída no Console
Plaintext
==================================================
   ORGANIZACAO DE DADOS - METODO BUBBLE SORT
==================================================

1. Dados Originais (Precos dos Produtos):
R$ 45.90, R$ 5.50, R$ 12.30, R$ 89.99, R$ 2.75, R$ 23.40, R$ 15.00, R$ 7.80, R$ 34.50, R$ 60.10

2. Dados Ordenados em Ordem Crescente:
R$ 2.75, R$ 5.50, R$ 7.80, R$ 12.30, R$ 15.00, R$ 23.40, R$ 34.50, R$ 45.90, R$ 60.10, R$ 89.99

3. Dados Ordenados em Ordem Decrescente:
R$ 89.99, R$ 60.10, R$ 45.90, R$ 34.50, R$ 23.40, R$ 15.00, R$ 12.30, R$ 7.80, R$ 5.50, R$ 2.75

==================================================
Fim da execucao do programa.
⚙️ Como Compilar e Executar
Certifique-se de ter um compilador de C instalado (como o GCC). No terminal, execute os comandos:

Compilar o programa:

Bash
gcc bubble_sort.c -o bubble_sort
Executar:

No Linux / macOS:

Bash
./bubble_sort
No Windows (CMD / PowerShell):

DOS
./bubble_sort.exe
📋 Checklist de Requisitos Atendidos
[x] Utilização correta de vetor com dez elementos.

[x] Aplicação do método Bubble Sort em ordem crescente.

[x] Aplicação do método Bubble Sort em ordem decrescente.

[x] Código comentado explicando as passagens e a lógica de troca.

[x] Organização, indentação e legibilidade do código.

[x] Saídas claras e bem formatadas para o usuário.


---

### Dica para o GitHub:
Basta criar um arquivo chamado **`README.md`** na raiz do seu repositório, colar esse conteúdo lá, salvar e fazer o commit!