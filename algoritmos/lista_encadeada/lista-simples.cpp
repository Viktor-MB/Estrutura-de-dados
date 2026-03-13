
#include <cstdio>
#include <iostream>

using namespace std;

class Celula {
public:
    int dado;
    Celula* prox;
    Celula(int d, Celula* p = nullptr) : dado(d), prox(p) {}
};

class ListaEncadeada {
private:
    Celula *inicio;
public:
    ListaEncadeada() {
        inicio = new Celula(0);
        inicio->prox = nullptr;
    }
    
    void insereLista(int x) {
        Celula *nova = new Celula(x);
        nova->prox = inicio->prox;
        inicio->prox = nova;
    }

    void removeLista(int x) {
        Celula *p = inicio; 
        while (p->prox != nullptr && p->prox->dado != x) {
            p = p->prox;
        }
        if (p->prox != nullptr) {
            Celula *remover = p->prox; 
            p->prox = remover->prox; 
            delete remover; 
        }
    }

    void imprime() {
        Celula *p = inicio->prox; 
        while (p != nullptr) {
            cout << p->dado << " "; 
            p = p->prox; 
        }
        cout << endl; 
    }
};