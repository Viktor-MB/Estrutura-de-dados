#include <iostream>
using namespace std;

class No{
public:
    int dado;
    No *proximo;
    No(int d, No* p = nullptr){
        this->dado = d;
        this->proximo = p;
    }
};

class ListaEncadeada{
    No *head;

    ListaEncadeada(){
        this->head = new No(0);
    }
    void add(int info){
        No *novo = new No(info);
        if(this->head->proximo == nullptr){
            this->head->proximo = novo;
        }
        else{
            No *p;
            p = head->proximo;

            while(p != nullptr){
                p = p->proximo;
            }
            p->proximo = novo;
        }
    }
    void remover(int info) {
        No *anterior = this->head;

        while (anterior->proximo != nullptr && anterior->proximo->dado != info) {
            anterior = anterior->proximo;
        }

        if (anterior->proximo != nullptr) {
            No *noParaRemover = anterior->proximo;
            anterior->proximo = noParaRemover->proximo;
            delete noParaRemover;
        }
    }
};

int main(){

    return 0;
}