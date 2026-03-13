# 📚 Repositório de Estrutura de Dados

Este repositório contém algoritmos e estruturas de dados desenvolvidos ao longo do curso, com implementações focadas na linguagem **C++**. O objetivo principal é o desenvolvimento de algoritmos eficientes, análise assintótica e a construção de estruturas lineares e não lineares otimizadas.

---

## 🧠 1. Fundamentos e Gerenciamento de Memória (C++)

A linguagem C++ é fortemente tipada e suporta o paradigma de Orientação a Objetos. O gerenciamento de memória é essencial ao lidar com Estruturas de Dados:

* **Ponteiros e Referências:** Variáveis que armazenam endereços de memória. Essenciais para iteração e alocação dinâmica, aumentando a velocidade de execução sem a necessidade de cópias custosas de objetos grandes.
* **Stack vs Heap:** * **Stack:** Aloca blocos de memória para funções locais de forma automática.
    * **Heap (Memória Dinâmica):** Permite alocar memória em tempo de execução usando as palavras-chave `new` e `delete` (equivalentes ao `malloc` e `free` em C).
* **STL (Standard Template Library):** Uso de bibliotecas padrão como `<vector>` (arrays dinâmicos), `<queue>` (filas) e `<stack>` (pilhas) para otimizar o manuseio dos dados.

---

## ⏱️ 2. Análise de Complexidade de Algoritmos

Utilizada para comparar a eficiência de algoritmos, focando em como o tempo de execução ou uso de espaço cresce conforme o tamanho da entrada ($N$) aumenta.

### Notações Assintóticas
* **Big-O ($O$):** Define o limite superior (pior caso).
* **Ômega ($\Omega$):** Define o limite inferior (melhor caso).
* **Theta ($\Theta$):** Define o limite exato (proporção estrita).

### Exemplos Clássicos
| Complexidade | Exemplo de Algoritmo |
| :--- | :--- |
| **$O(1)$** | Acesso direto (ex: pegar o primeiro elemento de um array). |
| **$O(\log N)$** | Busca Binária. |
| **$O(N)$** | Busca Linear, varreduras simples. |
| **$O(N \log N)$** | Merge Sort / Quick Sort. |
| **$O(N^2)$** | Algoritmos iterativos aninhados (ex: Bubble Sort). |

---

## ⛓️ 3. Estruturas de Dados Lineares: Listas Encadeadas

Diferente dos vetores estáticos, as Listas Encadeadas alocam memória dinamicamente, nó a nó. Cada nó guarda um dado e um ponteiro para o próximo elemento.

* **Lista Simplesmente Encadeada:** Travessia em apenas uma direção. Inserção no início é $O(1)$, busca e remoção no pior caso são $O(N)$.
* **Lista Circular:** O último nó aponta de volta para o primeiro, formando um ciclo (comum em sistemas operacionais e players de mídia).
* **Lista Duplamente Encadeada:** Cada nó possui ponteiros para o `próximo` e para o `anterior`, permitindo travessia bidirecional ao custo de maior uso de memória.

---

## 🌳 4. Estruturas Hierárquicas: Árvores

Organizam os dados de forma não linear e hierárquica.

* **Árvores Binárias:** Cada nó tem no máximo dois filhos (esquerda e direita).
* **Travessias (Percursos):**
    * **Pré-ordem:** Raiz $\rightarrow$ Esquerda $\rightarrow$ Direita.
    * **Em-ordem:** Esquerda $\rightarrow$ Raiz $\rightarrow$ Direita (produz dados ordenados em BSTs).
    * **Pós-ordem:** Esquerda $\rightarrow$ Direita $\rightarrow$ Raiz.
    * **Em Largura (BFS):** Visita por níveis utilizando uma fila auxiliar.

---

## 🔍 5. Árvores Binárias de Busca (BST) e Árvores AVL

### Árvores Binárias de Busca (BST)
Para todo nó, a subárvore à esquerda contém apenas valores menores que a raiz, e a direita contém apenas valores maiores.
* **Complexidade:** Operações de busca, inserção e remoção dependem da altura $O(h)$.
* **Problema:** Se os dados forem inseridos de forma ordenada, a árvore degenera em uma lista, atingindo altura $O(N)$.

### Árvores Balanceadas (AVL)
Resolve o problema da degeneração impondo um auto-balanceamento.
* **Fator de Balanceamento:** A diferença entre a altura da subárvore esquerda e direita deve estar no intervalo $\{-1, 0, 1\}$.
* **Rotações:** Quando desbalanceada, aplicam-se rotações simples (LL, RR) ou duplas (LR, RL) para restaurar o equilíbrio.
* **Vantagem:** Garante altura logarítmica, mantendo operações em $O(\log N)$ mesmo no pior caso.