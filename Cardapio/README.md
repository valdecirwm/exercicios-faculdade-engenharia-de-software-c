# 🍽️ Cardápio Digital de Restaurante — Sistema Interativo em C

![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Conclu%C3%ADdo-brightgreen.svg)
![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-orange.svg)

Sistema interativo desenvolvido em **Linguagem C** para automatizar o atendimento e a gestão de pedidos em estabelecimentos alimentícios ("Restaurante Sabor & Arte"). 

O projeto foi construído aplicando fundamentos de **Lógica de Programação**, **Pensamento Computacional**, **Estruturas de Repetição**, **Estruturas Condicionais** e conceitos de **Programação Defensiva**.

---

## 📌 Sumário
- [Funcionalidades](#-funcionalidades)
- [Estrutura e Lógica do Código](#-estrutura-e-lógica-do-código)
- [Recurso Bônus](#-recurso-bônus)
- [Como Executar o Projeto](#-como-executar-o-projeto)
- [Exemplo de Execução](#-exemplo-de-execução)
- [Critérios Técnicos Atendidos](#-critérios-técnicos-atendidos)
- [Autor](#-autor)

---

## 🚀 Funcionalidades

- **Menu Interativo Persistente:** O cliente pode navegar por diferentes categorias quantas vezes desejar antes de encerrar o atendimento.
- **Categorização Completa de Itens:**
  - 🍝 **Pratos Principais** (Frango Grelhado, Parmegiana, Filé de Peixe).
  - 🥤 **Bebidas** (Sucos Naturais, Refrigerantes, Água Mineral).
  - 🍰 **Sobremesas** (Pudim, Petit Gâteau, Salada de Frutas).
- **Controle Dinâmico de Quantidades:** Permite ao usuário escolher múltiplos itens em uma mesma operação.
- **Fechamento e Resumo da Conta:** Detalha a quantidade acumulada por categoria, o subtotal e o valor total final.
- **Programação Defensiva & Validação:** Intercepta opções inválidas do menu e quantidades negativas ou nulas, evitando *crashes* e prevenindo falhas de execução.

---

## 🛠️ Estrutura e Lógica do Código

O software foi desenvolvido seguindo as boas práticas de arquitetura ANSI C:

1. **Apresentação Hospitaleira:** Cabeçalho inicial descritivo instruindo o operador.
2. **Laço de Repetição Principal (`do-while`):** Mantém a aplicação rodando continuamente até que a opção de saída (`0`) seja acionada voluntariamente.
3. **Controle de Fluxo (`switch-case`):** Direciona o fluxo entre os submenus e o fechamento da conta.
4. **Decisões Condicionais (`if / else if / else`):** Valida os limites de opções, faz a somatória de preços com base nas quantidades e calcula os descontos.
5. **Tratamento de Exceções (`default`):** Garante a resiliência do sistema informando o usuário sobre dados fora do padrão e reexibindo o menu original.

---

## 🎁 Recurso Bônus

**Desconto Automático de 10%:**
Ao solicitar o resumo do pedido (Opção 4), o sistema avalia o subtotal acumulado. Se o valor for **igual ou superior a R$ 100,00**, o algoritmo calcula e aplica automaticamente um **desconto de 10%**, exibindo a economia gerada e o valor líquido ajustado.

---

## 💻 Como Executar o Projeto

### Pré-requisitos
- Compilador de C instalado (GCC, Clang ou IDE como **Dev-C++**, **Code::Blocks**, **VS Code** com extensão para C/C++).
- Alternativamente, pode ser compilado em compiladores online como o [OnlineGDB](https://www.onlinegdb.com/).

### Passo a Passo

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/seu-usuario/cardapio-digital-c.git
   cd cardapio-digital-c
   ```

2. **Compile o código-fonte:**
   ```bash
   gcc main.c -o cardapio_digital
   ```

3. **Execute o programa:**
   - **Linux/macOS:**
     ```bash
     ./cardapio_digital
     ```
   - **Windows:**
     ```cmd
     cardapio_digital.exe
     ```

---

## 🖥️ Exemplo de Execução

```text
==================================================
      BEM-VINDO AO RESTAURANTE SABOR & ARTE!      
==================================================
Sistema de Cardápio Digital e Atendimento Rápido.
Monte seu pedido, consulte categorias e calcule sua conta.
==================================================

------------------ MENU PRINCIPAL ------------------
1. Pratos Principais
2. Bebidas
3. Sobremesas
4. Ver Resumo do Pedido e Fechar Conta
0. Sair do Programa
----------------------------------------------------
Escolha uma opcao: 1

--- PRATOS PRINCIPAIS ---
1. Frango Grelhado com Fritas - R$ 35.00
2. Parmegiana de Bovino - R$ 45.00
3. Filé de Peixe ao Molho - R$ 40.00
Escolha o prato (ou 0 para voltar): 2
Digite a quantidade desejada: 2
>> Prato(s) adicionado(s) com sucesso!

...

==================================================
              RESUMO DO SEU PEDIDO                
==================================================
• Pratos Principais: 2 item(ns)
• Bebidas          : 2 item(ns)
• Sobremesas       : 0 item(ns)
--------------------------------------------------
Subtotal parcial   : R$ 108.00
Desconto (10%)     : - R$ 10.80
==================================================
TOTAL A PAGAR      : R$ 97.20
==================================================
```

---

## 📊 Critérios Técnicos Atendidos

| Critério | Status | Descrição |
| :--- | :---: | :--- |
| **Execução Sem Erros** | ✅ | Código ANSI C padronizado sem avisos ou erros de compilação. |
| **Estrutura de Repetição** | ✅ | Laço `do-while` para ciclo de vida do programa. |
| **Estruturas Condicionais** | ✅ | `switch-case` e `if/else` aplicados para navegação e lógica. |
| **Organização & Indentação** | ✅ | Código padronizado com 4 espaços de recuo e sintaxe limpa. |
| **Interação & Comentários** | ✅ | Mensagens amigáveis, avisos educativos e comentários explicativos. |

---

## 🧑‍💻 Autor

Desenvolvido por **Valdecir Morgado** como parte da atividade de **Experiência Prática II — Programação em Linguagem C** Faculdade de Engenharia de Software.