# Simulação de Sequenciamento de DNA em C 🧬

Este projeto foi desenvolvido como parte da disciplina de Estrutura de Dados I durante a minha graduação em Engenharia de Software. O objetivo é simular o emparelhamento de bases nitrogenadas em uma sequência de DNA, utilizando estruturas de Fila Dinâmica e Pilha Dinâmica em linguagem C. O projeto explora os conceitos de manipulação de estruturas de dados e lógica de programação aplicada à genética.

## 📑 Índice

- [Objetivo do Projeto](#objetivo-do-projeto)
- [Funcionalidades Implementadas](#funcionalidades-implementadas)
- [Estrutura do Código](#estrutura-do-código)
- [Telas de Saída](#telas-de-saída)
- [Tecnologias Utilizadas](#tecnologias-utilizadas)
- [Conclusão](#conclusão)
- [Nota Final](#nota-final)
- [Autora](#autora)

## <a name="objetivo-do-projeto"></a> 🎯 Objetivo do Projeto

O objetivo deste projeto é simular o processo de emparelhamento de bases nitrogenadas em uma sequência de DNA, aplicando os conceitos de fila e pilha. O usuário insere uma sequência de nucleotídeos (A, C, T, G), e o programa realiza o emparelhamento complementar, onde:

- **Adenina (A)** emparelha com **Timina (T)**
- **Citosina (C)** emparelha com **Guanina (G)**

A sequência de entrada é armazenada em uma Fila Dinâmica e o emparelhamento gerado é armazenado em uma Pilha Dinâmica, simulando a formação da dupla hélice do DNA.

## <a name="funcionalidades-implementadas"></a> ⚙️ Funcionalidades Implementadas

1. **Entrada de Sequência de DNA**: Permite a inserção de uma sequência de nucleotídeos (A, C, T, G).
2. **Emparelhamento Complementar**: Realiza o emparelhamento das bases nitrogenadas de acordo com as regras de DNA.
3. **Estrutura de Fila Dinâmica**: Armazena a sequência original de entrada.
4. **Estrutura de Pilha Dinâmica**: Armazena a sequência complementar do DNA.
5. **Exibição das Estruturas**: Imprime a sequência de entrada e sua sequência complementar.
6. **Verificação de Dados Inválidos**: Valida se a sequência contém apenas nucleotídeos permitidos (A, C, T, G).
7. **Menu Interativo**: Interface simples para navegação pelo programa.

## <a name="estrutura-do-código"></a> 🧬 Estrutura do Código

O código segue a seguinte estrutura:

- **Função de Inserção na Fila**: Armazena cada nucleotídeo da sequência na estrutura de fila.
- **Função de Inserção na Pilha**: Armazena cada nucleotídeo complementar na estrutura de pilha.
- **Função de Impressão**: Exibe a sequência de nucleotídeos na fila e sua sequência complementar na pilha.
- **Função de Validação de Entrada**: Garante que a sequência contenha apenas os caracteres válidos.
- **Loop Principal**: Fornece opções para entrada de dados, exibição da fila e pilha, e encerramento do programa.

## <a name="telas-de-saída"></a> 🖥️ Telas de Saída

Aqui estão algumas capturas de tela representativas do programa em execução:

1. **Tela Inicial - Menu do Programa**


2. **Tela de Entrada de Sequência**


3. **Tela de Exibição da Fila e Pilha**


## <a name="tecnologias-utilizadas"></a> 🛠️ Tecnologias Utilizadas

- **C**: Linguagem de programação utilizada para o desenvolvimento do projeto.
- **Dev C++**: IDE utilizada para compilar e testar o código.
- **Estruturas de Dados Dinâmicas**: Uso de Fila e Pilha para manipulação de dados.
- **Biblioteca `<stdlib.h>`**: Para alocação de memória dinâmica.

## <a name="conclusão"></a> 📊 Conclusão

Este projeto permitiu explorar conceitos fundamentais de estrutura de dados aplicados a um contexto biológico, simulando uma funcionalidade essencial para o estudo da genética. O uso de filas e pilhas para modelar o processo de emparelhamento de nucleotídeos reforçou a compreensão das regras de emparelhamento do DNA e das operações em estruturas de dados dinâmicas.

## <a name="nota-final"></a> 🎓 Nota Final

Obtive a nota máxima neste projeto, com muita dedicação e interesse.


## <a name="autora"></a> 👩‍💻 Autora

Este projeto foi desenvolvido por **Bárbara Rocha**, estudante do curso de Engenharia de Software da Unicesumar. O projeto foi realizado como parte da disciplina de Estrutura de Dados I, com o objetivo de aplicar e aprofundar os conhecimentos adquiridos na área de programação.
