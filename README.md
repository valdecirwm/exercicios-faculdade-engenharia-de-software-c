# 💻 Exercícios e Projetos em Linguagem C — Faculdade de Engenharia de Software

![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-brightgreen.svg)
![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-orange.svg)

Repositório dedicado ao armazenamento e organização de **exercícios, projetos práticos e algoritmos** desenvolvidos durante o curso de **Engenharia de Software**. O objetivo principal é consolidar conceitos fundamentais de programação, estruturas de dados e lógica computacional utilizando a **Linguagem C**.

---

## 📌 Sumário
- [Estrutura do Repositório](#-estrutura-do-repositório)
- [Projetos e Exercícios Incluídos](#-projetos-e-exercícios-incluídos)
  - [1. Cardápio Digital](#1-cardápio-digital)
  - [2. Controle de Tráfego - Pedágio](#2-controle-de-tráfego---pedágio)
  - [3. Ordenação de Preços (Bubble Sort)](#3-ordenação-de-preços-bubble-sort)
- [Conceitos Aplicados](#-conceitos-aplicados)
- [Como Executar os Projetos](#-como-executar-os-projetos)
- [Autor](#-autor)

---

## 📂 Estrutura do Repositório

```text
exercicios-faculdade-engenharia-de-software-c/
├── Cardapio/
│   ├── cardapio.c
│   └── README.md
├── Pedagio/
│   ├── pedagio.c
│   └── README.md
├── Supermercado/
│   ├── supermercado.c
│   └── README.md
├── .gitignore
└── README.md
```

---

## 🚀 Projetos e Exercícios Incluídos

### 1. Cardápio Digital (`/Cardapio`)
Sistema interativo de atendimento e gestão de pedidos para o *"Restaurante Sabor & Arte"*.
- **Destaques:** Menu interativo com `do-while`, múltiplos itens por categoria, fechamento de conta com resumo detalhado e **desconto automático de 10%** para pedidos a partir de R$ 100,00.
- **Conceitos:** Programação defensiva, validação de entradas, `switch-case`, `if/else`.

### 2. Controle de Tráfego - Pedágio (`/Pedagio`)
Simulador de monitoramento do fluxo semanal de veículos em uma rodovia.
- **Destaques:** Coleta sequencial para os 7 dias da semana, cálculo de total acumulado e média diária, além de identificação dinâmica com **destaque visual (ANSI)** para o *Dia de Pico*.
- **Conceitos:** Vetores (`arrays`), manipulação de strings (`char*`), formatação tabular de saída no terminal.

### 3. Ordenação de Preços - Supermercado (`/Supermercado`)
Algoritmo de organização de dados para análise de preços em um cenário de supermercado.
- **Destaques:** Aplicação do algoritmo **Bubble Sort (Método Bolha)** para ordenar um vetor de 10 preços em ordem crescente e decrescente.
- **Conceitos:** Algoritmos de ordenação, laços aninhados (`for`), estruturas condicionais e lógica de *swap* (troca de variáveis).

---

## 🛠️ Conceitos Aplicados

Ao longo destes exercícios, foram explorados e aplicados os seguintes fundamentos de Ciência da Computação e Engenharia de Software:

* **Sintaxe ANSI C & Padronização de Código**
* **Lógica de Programação & Pensamento Computacional**
* **Estruturas Condicionais:** `if`, `else if`, `else`, `switch-case`
* **Estruturas de Repetição:** `for`, `while`, `do-while`
* **Estruturas de Dados Básicas:** Vetores unidimensionais (Arrays)
* **Algoritmos de Ordenação:** Bubble Sort
* **Programação Defensiva & Tratamento de Entradas**

---

## 💻 Como Executar os Projetos

### Pré-requisitos
Ter um compilador C instalado em seu sistema:
- **GCC** (via MinGW no Windows ou nativo no Linux/macOS)
- **IDE** como VS Code, Code::Blocks ou Dev-C++

### Passos Gerais para Execução
1. Clone este repositório:
   ```bash
   git clone https://github.com/valdecirwm/exercicios-faculdade-engenharia-de-software-c.git
   ```
2. Navegue até a pasta do projeto desejado:
   ```bash
   cd Cardapio   # ou /Pedagio ou /Supermercado
   ```
3. Compile o código `.c`:
   ```bash
   gcc programa.c -o programa
   ```
4. Execute o arquivo gerado:
   - **Linux/macOS:** `./programa`
   - **Windows:** `programa.exe`

---

## 🧑‍💻 Autor

Desenvolvido por **Valdecir** no âmbito das atividades práticas do curso de **Engenharia de Software**.