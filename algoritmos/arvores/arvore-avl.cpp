#include <cstdio>
#include <iostream>

using namespace std;

class No {
public:
    int dado;
    No* esquerdo;
    No* direito;
    int altura;
    No(int valor) : dado(valor), esquerdo(nullptr), direito(nullptr), altura(1) {}
};

class ArvoreAVL {
private:
    No* raiz;
    int obterAltura(No* no) { return no ? no->altura : 0; }
    int obterBalanco(No* no) { return no ? obterAltura(no->esquerdo) - obterAltura(no->direito) : 0; }

    No* rotacaoDireita(No* y) {
        No* x = y->esquerdo;
        No* T2 = x->direito;
        x->direito = y;
        y->esquerdo = T2;
        y->altura = max(obterAltura(y->esquerdo), obterAltura(y->direito)) + 1;
        x->altura = max(obterAltura(x->esquerdo), obterAltura(x->direito)) + 1;
        return x;
    }

    No* rotacaoEsquerda(No* x) {
        No* y = x->direito;
        No* T2 = y->esquerdo;
        y->esquerdo = x;
        x->direito = T2;
        x->altura = max(obterAltura(x->esquerdo), obterAltura(x->direito)) + 1;
        y->altura = max(obterAltura(y->esquerdo), obterAltura(y->direito)) + 1;
        return y;
    }

    No* inserir(No* no, int valor) {
        if (no == nullptr) return new No(valor);
        if (valor < no->dado) no->esquerdo = inserir(no->esquerdo, valor);
        else if (valor > no->dado) no->direito = inserir(no->direito, valor);
        else return no;

        no->altura = 1 + max(obterAltura(no->esquerdo), obterAltura(no->direito));
        int balanco = obterBalanco(no);

        if (balanco > 1 && valor < no->esquerdo->dado) return rotacaoDireita(no);
        if (balanco < -1 && valor > no->direito->dado) return rotacaoEsquerda(no);
        if (balanco > 1 && valor > no->esquerdo->dado) {
            no->esquerdo = rotacaoEsquerda(no->esquerdo);
            return rotacaoDireita(no);
        }
        if (balanco < -1 && valor < no->direito->dado) {
            no->direito = rotacaoDireita(no->direito);
            return rotacaoEsquerda(no);
        }
        return no;
    }
};