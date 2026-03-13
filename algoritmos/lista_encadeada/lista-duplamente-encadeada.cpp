#include <cstdio>
#include <iostream>

using namespace std;


class Celula {
public:
    int dado; 
    Celula *prox; 
    Celula *ant; 
    Celula(int valor) : dado(valor), prox(nullptr), ant(nullptr) {}
};

class ListaDuplamenteLigada {
private:
    Celula *inicio; 
    Celula *fim; 
public:
    ListaDuplamenteLigada() { inicio = nullptr; fim = nullptr; }

    void insereInicio(int x) {
        Celula *nova = new Celula(x);
        if (inicio == nullptr) { 
            inicio = nova; fim = nova;
        } else {
            nova->prox = inicio; 
            inicio->ant = nova; 
            inicio = nova; 
        }
    }

    void insereFim(int x) {
        Celula *nova = new Celula(x);
        if (fim == nullptr) { 
            inicio = nova; fim = nova;
        } else {
            nova->ant = fim; 
            fim->prox = nova; 
            fim = nova; 
        }
    }

    void remove(int x) {
        Celula *p = inicio;
        while (p != nullptr) {
            if (p->dado == x) { 
                if (p->ant != nullptr) p->ant->prox = p->prox; 
                else inicio = p->prox; 
                if (p->prox != nullptr) p->prox->ant = p->ant; 
                else fim = p->ant; 
                delete p; 
                return;
            }
            p = p->prox; 
        }
    }
};