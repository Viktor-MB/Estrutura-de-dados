#include <cstdio>
#include <iostream>

using namespace std;

#include "lista-simples.cpp" // Para acessar a classe da Celula

class ListaCircular {
public:
    Celula *inicio; 

    ListaCircular() {
        inicio = new Celula(0); 
        inicio->prox = inicio; 
    }

    void insere(int x) {
        Celula *nova = new Celula(x);
        Celula *p = inicio;
        while (p->prox != inicio) p = p->prox;
        p->prox = nova; 
        nova->prox = inicio; 
    }

    void remove(int x) {
        Celula *p = inicio;
        Celula *ant = nullptr;
        do {
            ant = p;
            p = p->prox;
        } while (p != inicio && p->dado != x);
        
        if (p != inicio) {
            ant->prox = p->prox; 
            delete p; 
        }
    }

    bool busca(int x) const {
        Celula *p = inicio->prox;
        while (p != inicio) {
            if (p->dado == x) return true; 
            p = p->prox; 
        }
        return false; 
    }
};