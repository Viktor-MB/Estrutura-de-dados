#include <iostream>
using namespace std;

class No{
public:
    int dado;
    No *proximo;
    No *anterior;
    No(int d, No* p = nullptr, No* a = nullptr){
        this->dado = d;
        this->proximo = p;
        this->anterior = a;
    }
};

class ListaDuplamenteEncadeada{
private:
    No *head; 

public:
    ListaDuplamenteEncadeada(){
        this->head = new No(0);
    }

    void addAoInicio(int info){
        No *novo = new No(info);
        No *primeiroNo = head->proximo;

        novo->proximo = primeiroNo;
        novo->anterior = head;

        // 2. Liga o 'head' ao 'novo'
        head->proximo = novo;

        // 3. Liga o 'primeiroNo' (se existir) de volta ao 'novo'
        if (primeiroNo != nullptr) {
            primeiroNo->anterior = novo;
        }
    }
    
    void addAoFinal(int info){
        No *novo = new No(info);
        No *ultimo = head;

        // 1. Percorre a lista até achar o último nó (NÃO nullptr)
        while (ultimo->proximo != nullptr) {
            ultimo = ultimo->proximo;
        }

        // 'ultimo' agora é o último nó da lista
        // 2. Liga o 'ultimo' ao 'novo'
        ultimo->proximo = novo;
        // 3. Liga o 'novo' de volta ao 'ultimo'
        novo->anterior = ultimo;
    }


    void remover(int info) {
        No *anterior = this->head;

        // 1. Percorre a lista para encontrar o nó ANTERIOR ao que será removido
        while (anterior->proximo != nullptr && anterior->proximo->dado != info) {
            anterior = anterior->proximo;
        }

        // 2. Se o nó foi encontrado (anterior->proximo não é nulo)
        if (anterior->proximo != nullptr) {
            No *noParaRemover = anterior->proximo;
            No *proximoNo = noParaRemover->proximo;

            // 3. Liga o 'anterior' ao 'proximoNo', pulando o nó a ser removido
            anterior->proximo = proximoNo;

            // 4. *** PASSO CRUCIAL DA LISTA DUPLA ***
            // Liga o 'proximoNo' (se existir) de volta ao 'anterior'
            if (proximoNo != nullptr) {
                proximoNo->anterior = anterior;
            }

            // 5. Libera a memória
            delete noParaRemover;
        }
    }

    void imprime() {
        No *p = head->proximo; // Pula o nó cabeça
        if (p == nullptr) {
            cout << "Lista vazia." << endl;
            return;
        }

        cout << "NULL <- ";
        while (p != nullptr) {
            cout << p->dado;
            if (p->proximo != nullptr) {
                cout << " <-> ";
            }
            p = p->proximo;
        }
        cout << " -> NULL" << endl;
    }
};

int main(){
    ListaDuplamenteEncadeada lista;

    cout << "Adicionando 10 e 20 no inicio:" << endl;
    lista.addAoInicio(10);
    lista.addAoInicio(20);
    lista.imprime(); // Saída: NULL <- 20 <-> 10 -> NULL

    cout << "\nAdicionando 30 no final:" << endl;
    lista.addAoFinal(30);
    lista.imprime(); // Saída: NULL <- 20 <-> 10 <-> 30 -> NULL

    cout << "\nRemovendo 10 (meio):" << endl;
    lista.remover(10);
    lista.imprime(); // Saída: NULL <- 20 <-> 30 -> NULL

    cout << "\nRemovendo 20 (inicio):" << endl;
    lista.remover(20);
    lista.imprime(); // Saída: NULL <- 30 -> NULL

    cout << "\nRemovendo 30 (fim):" << endl;
    lista.remover(30);
    lista.imprime(); // Saída: Lista vazia.

    cout << "\nTentando remover 99 (nao existe):" << endl;
    lista.remover(99);
    lista.imprime(); // Saída: Lista vazia.

    return 0; 
}